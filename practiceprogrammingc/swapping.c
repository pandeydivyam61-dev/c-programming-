#include <stdio.h>

void swap(int* x, int* y){
    int temp;
    temp = *x;//*x is the value stored at that particular addreses
    *x =*y;
    *y = temp;
    return;
}
int main(){
       int a = 1;
       int b = 4 ;
       swap(&a,&b);
       printf("The value of a is %d\n", a);
       printf("The value of b is %d", b);

return 0;

}
//int* stores adddres of the variable 
//int** stores addreses of variable 