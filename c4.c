#include<stdio.h>
 int main(int argc, char *argv[]){
    int i;
    if(argc < 2) {
        printf("Usage: %s <arguments>\n", argv[0]);
        return 1;
    }
    printf("hello, ");
    for(i=1; i < argc; i++){
        printf("%s ", argv[i]);
     if (i< argc -1){
            printf(" ");
        }
     }
     //the above loop is equivalent to (in case argc is 2 )the follwing:
     //in the loop unroled version
     {
    printf("%s ", argv[i]);
    if (i< argc -1){
        printf(" ");
    }
{
    printf("%s ", argv[i]);
    if (i< argc -1){
        printf(" ");
    }
}
        }
    
{

     printf("!\n");
     return 0;  
}