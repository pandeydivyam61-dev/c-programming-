#include <stdio.h>
//function declaration
int //return type 
add(int x, int y){//arguments
    return x + y;
}

int main(){
     int a , b;
     printf("enter both the number :");
     scanf("%d,%d", &a ,&b);
//concept  of function prototype by using return type before the function
//usiing function prortypr order never matters 
     int sum = add(a,b);
     printf("%d", sum);
     return 0;



}