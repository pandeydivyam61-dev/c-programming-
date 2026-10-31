#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/*
 * Demonstrates the important concepts of malloc and calloc:
 *  1. Syntax and use of sizeof *ptr (type-safe sizing)
 *  2. Always checking for NULL (allocation can fail)
 *  3. malloc  -> memory is UNINITIALIZED (reading it is undefined behavior)
 *  4. calloc  -> memory is ZERO-INITIALIZED
 *  5. calloc(n, size) takes two args and detects n*size overflow;
 *     with malloc you must check overflow yourself
 *  6. realloc to resize (safe pattern using a temporary pointer)
 *  7. free() exactly once, then set the pointer to NULL
 *  8. Avoiding memory leaks, dangling pointers and double free
 */
void malloc_calloc_demo(size_t n)
{
    /* ---------- malloc ---------- */
    /* Manual overflow check: n * sizeof(int) must not wrap around */
    if (n == 0 || n > SIZE_MAX / sizeof(int)) {
        fprintf(stderr, "Invalid size\n");
        return;
    }

    int *m = malloc(n * sizeof *m);   /* sizeof *m stays correct if type changes */
    if (m == NULL) {                  /* malloc returns NULL on failure */
        perror("malloc failed");
        return;
    }
    /* Contents of m are indeterminate here: initialize before reading */
    for (size_t i = 0; i < n; i++)
        m[i] = (int)(i + 1);

    printf("malloc  (after manual init): ");
    for (size_t i = 0; i < n; i++)
        printf("%d ", m[i]);
    printf("\n");

    /* ---------- calloc ---------- */
    int *c = calloc(n, sizeof *c);    /* (count, element size); overflow-safe */
    if (c == NULL) {
        perror("calloc failed");
        free(m);                      /* avoid leaking earlier allocation */
        return;
    }
    printf("calloc  (auto zeroed)      : ");
    for (size_t i = 0; i < n; i++)
        printf("%d ", c[i]);          /* all 0 */
    printf("\n");

    /* Equivalent of calloc using malloc + memset */
    int *m2 = malloc(n * sizeof *m2);
    if (m2 != NULL) {
        memset(m2, 0, n * sizeof *m2);
        free(m2);
    }

    /* ---------- realloc (resize) ---------- */
    size_t new_n = n * 2;
    int *tmp = realloc(m, new_n * sizeof *m);  /* never assign directly to m */
    if (tmp == NULL) {
        perror("realloc failed");     /* original m is still valid */
    } else {
        m = tmp;                      /* old contents preserved; new part uninitialized */
        for (size_t i = n; i < new_n; i++)
            m[i] = 0;
        printf("realloc (size doubled)     : ");
        for (size_t i = 0; i < new_n; i++)
            printf("%d ", m[i]);
        printf("\n");
    }

    /* ---------- free ---------- */
    free(m);
    m = NULL;     /* prevents dangling pointer / double free */
    free(c);
    c = NULL;
    free(m);      /* safe: free(NULL) does nothing */
}

int main(void)
{
    malloc_calloc_demo(5);
    return 0;
}