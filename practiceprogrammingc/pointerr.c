#include <stdio.h>
//pointer is basically address of variable 

int main (){
     int a = 5;
     int* x = &a;//store addresses
     printf("%p", x);
     return 0;

}