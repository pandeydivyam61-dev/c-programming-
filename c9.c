#include<stdio.h>

int main(){
   int choice;
   printf("Menu:\n")
   printf("1.Add\n2.Subtract\n3.multiply\n4.Divide\n");
   scanf("%d", &choice);

   int a, b;
   print("Enter two intergers");
   scanf("%d %d", &a ,&b);

   switch(choice){
   case 1: printf("Result =%d\n", a+b);break;
case 2: printf("Result =%d\n", a-b);break;
case 3: printf("Result =%d\n", a*b);break;
case 4: 
if (b!=0)
printf("Result = %d\n", a/b);
else
   printf("Division by zero error!\n");
break;
default: printf("Invalid choice\n")


   }
return 0;



}