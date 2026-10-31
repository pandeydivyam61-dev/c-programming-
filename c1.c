#include <stdio.h>
#include <limit.h>

#define N 100 
//n IS MACRO 

int main(){

     //declaration of variables 
         short int a, b;
     //<modifier> < base data type > <variablr name >
        unsigned short int ua, ub ;
         int  c, d;
         unsigned int uc, ud;
         long int e ,f;
         unsigned long int ue, uf;
         long long int g, h;
         unsigned long long int ug, uh;





     //%-> format specifier 
         printf("\nMinimum and Maximum values:\n)");
         printyf("short int: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
         printf("unsigned short int: [0, %u]\n", USHRT_MAX);
         printf("int: [%d, %d]\n", INT_MIN, INT_MAX);
         printf("unsigned int: [0, %u]\n", UINT_MAX);
         printf("long int: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
         printf("unsigned long int: [0, %lu]\n", ULONG_MAX);
         printf("long long int: [%lld, %lld]\n", LLONG_MIN, LLONG_MAX);
         printf("unsigned long long int: [0, %llu]\n", ULLONG_MAX);
         
         ////taking the input of of each variable 
         printf("\nEntyer two short integers;");
         scanf("%hd %hd ", &a, &b);

         printf("Enter two unsigned short integers");
         scanf("%hu %hu", &ua, &ub);

         printf("Enter two integers: ");
         scanf("%d %d", &c, &d);

         printf("Enter two unsigned integers: ");
         scanf("%u %u", &uc, &ud);

         printf("enter two long integers:");
         scanf("%ld %ld", &e, &f);

         printf("Enter two unsigned long integers:");
         scanf("%lu %lu", &ue, &uf);

         printf("Enter two long long integers:");
         scanf("%lld %lld", &g, &h);

         printf("Enter two unsigned long long integers:");
         scanf("%llu %llu ", &ug, &uh);

         //perform basic arthemetic and print the result for each type 
         printf("\nResults for short int:\n");
         printf("Sum: %hd\n", a + b);
         printf("Difference: %hd\n", a - b);
         printf("Product : %hd\n", a*b);
         printf("Quotient: %hd\n", a/b);

         printf("\nResults for unsigned short int:\n");
         printf("Sum: %hu\n", ua + ub);
         printf("Difference: %hu\n", ua - ub);
         printf("Product: %hu\n", ua * ub);
         printf("Quotient: %hu\n", ua / ub);

         
         printf("\nResults for int:\n");
         printf("Sum: %d\n", c + d);
         printf("Difference: %d\n", c - d);
         printf("Product: %d\n", c * d);
         printf("Quotient: %d\n", c / d);

         
         printf("\nResults for unsigned int:\n");
         printf("Sum: %u\n", uc + ud);
         printf("Difference: %u\n", uc - ud);
         printf("Product: %u\n", uc * ud);
         printf("Quotient: %u\n", uc / ud);

         
         printf("\nResults for long int:\n");
         printf("Sum: %ld\n", e + f);
         printf("Difference: %ld\n", e - f);
         printf("Product: %ld\n", e * f);
         printf("Quotient: %ld\n", e / f);

         
         printf("\nResults for unsigned long int:\n");
         printf("Sum: %lu\n", ue + uf);
         printf("Difference: %lu\n", ue - uf);
         printf("Product: %lu\n", ue * uf);
         printf("Quotient: %lu\n", ue / uf);

         
         printf("\nResults for long long int:\n");
         printf("Sum: %lld\n", g + h);
         printf("Difference: %lld\n", g - h);
         printf("Product: %lld\n", g * h);
         printf("Quotient: %lld\n", g / h);

         
         printf("\nResults for unsigned long long int:\n");
         printf("Sum: %llu\n", ug + uh);
         printf("Difference: %llu\n", ug - uh);
         printf("Product: %llu\n", ug * uh);
         printf("Quotient: %llu\n", ug / uh);
         
         return 0;//The "return value "

}
         





        
















