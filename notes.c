#include <stdio.h>//preprocessor directive 
//Pre processor directive -> #include <stdio.h> is a preprocessor directive that tells the compiler to include the standard input-output library before compiling the program. This library provides functions for input and output operations, such as printf and scanf.

{
//int main() -> global variable 
//A global variables are declared outside all functions, usually at the top of the program.
//creating program containing all concepts of c language 
//return 0; -> return statement
//return statement is used to exit from a function and optionally return a value to the calling function. In the case of main(), returning 0 indicates that the program has executed successfully.
//%-> format specifier is used in printf and scanf functions to specify the type of data being printed or read. For example, %d is used for integers, %f for floating-point numbers, and %s for strings.
// printf("enter two integers: "); standard output function
// scanf("%d %d",&a,&b);standard input function
//%d->format specifier for integer
//& -> ampersand operator// address of operator
//<modifier> <base data type> <variable name> -> variable declaration
//macros ->Macros in C are preprocessor directives that replace code before the compilation process, helping simplify and optimize programs.
//Macros improve code readability, reusability, and maintainability.
//scanf is taking input fron stdin
// Escape sequence character -> "\x"where x can be correspond to any known escape character seqauence character
     //function declaration -> float cal_si(float p, float r, float t);  
//A function declaration and a function definition are two important concepts in C. A declaration tells the compiler that a function exists, while a definition provides the actual implementation of that function.

// A function declaration specifies what the function looks like.
// A function definition specifies how the function works.
     
     //function call ->float result = cal_si(1000, 5, 2);
     // arguments orders matters
     // function defination -.float cal_si(float p, float r, float t) 
     //assigments operatator
     // =, +=, -=, *=, /=, %=
     //Bitwise operators
     //&, |, ^, ~, <<, >> 
     //si = p * r * t / 100
     //the calling function must be aware of called function
     // post  increment operator x++
     // pre incement operator ++x
     // x++ means first use the value of x and then increment it by 1
// ++x means first increment the value of x by 1 and then use it
 








 
//DATA TYPE -> is not only it value but its behaviour and all its restriction
      //int -> stores number commonly 4 bytes && it stores postive negative AND WHOLE  no 
      //float -> used for deciaml and uses about 4 bytes 6 to 7 decimal places 
      //double -> used for decimal and uses about 8 bytes && 15 16 deciaml places 
      //Boolean -> used for true and false 
      //Signed int -> all positive and negative value 
      //unsigned int -> only zero and positive integers 
      //char-> for single character 1 byte 
      //short       → small box
      // int         → medium box
      // long        → large box
      // long long   → very large box
      //Windows 64-bit:
      // long       → 4 bytes
      // long long  → 8 bytes

      // Linux 64-bit:
      // long       → 8 bytes
      // long long  → 8 bytes
      //long long can store numbers up to rough 9.2x10^18
      //| Operator | Meaning                  |
      // | -------- | ------------------------ |
      // |  `==`     | Equal to                 |
      // | `!=`     | Not equal to             |
      // | `>`      | Greater than             |
      // | `<`      | Less than                |
      // | `>=`     | Greater than or equal to |
      // | `<=`     | Less than or equal to    |
      // | Data type                | Format specifier | Example              |
      // | ------------------------ | ---------------- | -------------------- |
      // | `long int`               | `%ld`            | `printf("%ld", x);`  |
      // | `unsigned long int`      | `%lu`            | `printf("%lu", x);`  |
      // | `long long int`          | `%lld`           | `printf("%lld", x);` |
      // | `unsigned long long int` | `%llu`           | `printf("%llu", x);` |
      // |  unsigned int             | %u
      // |  double                  |%lf
      //
      //
      //

 

    
}