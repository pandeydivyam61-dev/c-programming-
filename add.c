#include <stdio.h>

int main(void) {
    int x = 5;
    int y;

    y = x++;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
