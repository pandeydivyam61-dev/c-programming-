#include<stdio.h>

int main(){
      int n, sum=0;
      printf("Enter a positive integer: ");
      scanf("%d", &n);
       
      //entry in controlled loop 
      for (int i=1; i <= n; ++i) {
          sum += i; 

      }
      printf("Sum = %d\n", sum);
      return 0;
    

}