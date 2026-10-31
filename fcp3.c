// Chech whether a number is prime . Make a separet function for the same 

#include <stdio.h>

int main(){
     int num, flag = 0;
     printf("Enter the number: ");
     scanf("%d", &num);

     if (num <= 1){
    printf("Not prime\n");
    return 0;
     }
    for (int i =2; i<= num/2; i++){
     if(num % i ==0){
        flag = 1;
        break;

     }

    }
    if (flag == 0)

     }





