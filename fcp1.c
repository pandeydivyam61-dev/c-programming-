//Print the sum of the digitd of number . Make separate function for the same 
#include<stdio.h>

int main(){
     int num, sum = 0, digits;
     printf("Enter the number: ");
     scanf("%d", &num);

     while (num>0){
        digits = num % 10;
        sum += digits;
        num /= 10;
}

printf("Sum of the digit: %d\n", sum);
return 0;
//& is to addresses the place in memory 


}