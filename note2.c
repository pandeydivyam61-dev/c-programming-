#include <stdio.h>

int main(){
         
      // diffrence between for , while and do while loop
      //for loop is used when we know the number of iteration the loop condition is execetued after  cgecking th econdition 
      //while loop is used when we donot know the number of iteration
      //do while loop is used when we want to execute the loop at least once

    
    
    
    
    
    
    
    
    
    
    
    
    
    //1 sep
         //How two integers will get mulplied  at machine level (assuming the product is also integers )?
         //bit wise operator allow data to manipulate at bit level
         //program can access only at byte level but program can accesss to particular bit wise operator 
         // to half the number we can shift the 1 right wise by 1 bit 
         //&,|,^,<<,>>
         //to double the number we can shift the 1 lift wise using left wise operator 
         //Bit wise operator: further optmisiation can be done using bit wise operator 
         //multiple if elses mean if else ladder
         //Program counter : keeps the track of current line of instruction getting exceuted
         //There is a register in a PC (program counter) processor that contains the address of the next instruction to be executed from memory.
         // Or opertor : ||
         //word wrapping 
         //Ternary operator : shoter format of if else 
         // condition? <action_if _true> <action_if_false>
         // example: (num % 2 == 0)? printf("%d is even\n", num ): printf("%d is odd\n", num )
         // &&-> AND ,  ||-> Or ,!-> NOT
         //
         

         //15 september
         //Type casting -> IS basically converting one data type to another
         //implict type casting -> convertion is not visible (double_ value = int_value )
         //all variable data types involved are elevated to match the data type of the variable with the largest range or precision. This is also known as type promotion.
         //data loss in above type casting tends to no data loss whereas when (int_ value = double_value)
         //explicit type casting -> convertion is done through codes (double_value = (int)int_value)
         //it prevents data loss by converting the data type of the variable with the largest range or precision to match the data type of the variable with the smallest range or precision. This is also known as type demotion.

         //char is child data type of integer with some special constrain and special representation
         //ASCII value tell the values of character
         //Lexicographical order is the order  in dictinory
         //Type promotion -> here in order to avoid data loss  type changes to another while performing the arthmetic operation
         //graphs without circular loop is tree 


         //Arrays-> 
         //An array is a collection of multiple values of the same data type stored under one variable name.
         //lineraly arranged or stored in memory 
         //indexing ->Indexing means accessing a particular element of an array using its position number
         //base addresses of arrays  is the name of the array
         //arrays contain homogenous elements
         //Homogenous data structure are faster then Hetrogenous data structure 
         //1 D arrays : Store a single list of the element of a similar data type.
         //2D Arrays : Store a 'list of lists' of the element of a similar data type.

         
         //16sep
         //Adresse representation system 
         //Binary 0,1
         //octadecimal 0-7(8)
         //decimal 0-9 (10)
         //hexadeciaml 0-9 a-f(16)

         //in our complier an integer take 4 bytes 
         //int[m][n]=>n  m is number of rows && n is number of columns 
         //2d/3D/ nD->are the logical representation
         // 2D is arrays of arrays (same applies the further )
         //All the arrays are linearly arranged in memory in row major order 
         // in c complier The arrays are arranged  in Row Major Order (by default )
         //defragmentation -> Defragmentation is the process of rearranging fragmented files on a storage drive so that their pieces are stored closer together/contiguously.
         //Row major Order  is to read data smoothly in single row (data is stored in row major order in c ) 
         //row major order -> 1,2,3,4,5,6
         //Columns Major Order is used whole columns has significance ->  MATLAB
         //to refer in 2d arrays we use matix[1][2]
         // Nested for loop : For loop within for loop
         //as the 2d arrays has 2 for loops
         // IN 2d arrays
         

         //     for (int i = 0; i < 2; i++) {          // rows
         //         for (int j = 0; j < 3; j++) {      // columns
         //printf("%d ", arr[i][j]);}
      
         // outer loop → rows(i)
         //inner loop → columns(j)
         //Data is always stored in Row Major Order 
         //Format specifier for address is %p

         //the RAM has dynamic memory reason 
         //Dyanmic memory heap
         //Heap memory is a large region of RAM used to allocate data dynamically during a program's runtime, rather than at compile time.
         //malloc() && calloc () both are used for dynamic memory alloctaion - getting memory while running a program 
         //malloc-> This asks for enough memory to store 5 integers.Memory Allocation
         //The important point: malloc() does NOT initialize the memory.
         //So the allocated memory contains indeterminate/garbage values until you put your own values there.
         //calloc()->But calloc() initializes the allocated bytes to zero, so for an int array Contiguous Allocation
         //formatting -> Quick Formatting deleting the file linking with data 
         


         //22 sep
         
         //Pointers : points the addresses at which x is stored 
         //int* pointer = &x
         //*-> astrases
         //int* correspond to int size behaviour that is increment by 4 byte here for example 
         //point_i*++ is increment by one datya type
         //while declaration LHS= int *ptr1
         //RHS usages = *ptr1 ives the value stored at x
         //pointer are unsafe if operating such as linux 
         //operating system is properly designed for processes management 
         //there should be proper process for comunicating while in os(ipc)
         //different os and hardware may act different in different system 
         //&x may be different in difffernt system 
         //correct behavior of the assignment depends on the compiler 
         //explict data type is used to display in same way donot depend on the architechture 
         //i.e. (void*)&x(to ensure better memory addressing)
         //*ptr help to acces the value of the x
         //To ensure TYpe safetyfor better memory addressing 
         //smarter way to pass the addresses of array instead of the arrays 
         //arrays and pointer are same
         //


         //23sep
         //Pointer Arthemetic: applying arthmetic in pointer is the pointer arthemetic (p++)
         //IN case of arrays the name of array signifies the addresses
         //for example -> int a[3]={} the a is the addreses, 3 is the size of the arrays  ptr = a
         //int a=6 here a signifes value so ptr=&a
         //by defaults the a points the base  elemnts so logicallly a is same as the pointers 
         //so the addreses of the array which is int a[] is same as pointer(a=p)
         //process control box ->A Process Control Block (PCB) is a data structure used by the operating system to keep track of process information and manage execution. It helps the OS monitor and control process execution.
         //garbage value 
         //program counter -> keeps the track of current line of instruction getting exceuted
         //arrays have some restriction over pointers 
         // Pointer to an array of 5 integers
         //int(*ptr)[5];
         //pre incements operator ++i
         //post increments operator i++
         //In 2d arrays we uses double pointers int**
         //static arrays are the arrays in which size is defined or fixed 
         //due to row major order in c -> we can introduce a new row while adding more elmnets (partially dyanmic arrys )
         //dynamic arrays -> we can change the no of rows as well introduce new elements
         //When using a pointer with a 2D array, the pointer points to a row.
         // The pointer needs to know the number of columns, because that tells it the size of each row.
         // The number of rows is not necessary for calculating the next row's address.
         // When the pointer moves by 1, it moves to the next complete row.
         // Therefore, the column size is important, while the row size can be left unspecified.

         //Function pointer :A function pointer is a pointer that stores the address of a function instead of the address of a normal variable. It allows you to call a function indirectly through the pointer
         //typedef double (*operation_func)(double,double);
         //typedef is used to make its your own data type 
         //operation func is the function pointer that can point to any function that take in to double paramentser and return a double value
         
         
         
         //25 september 2026
         //by default the byte given by program is of void type
         //to explict type casting is important 
         //data_type* array = (data_type*)malloc(sizeof(data)*num_elements);
         //this is for malloc 
         //malloc is giving the address of memory block
         //static memeory take the memory from safe area 
         //dyanmic takes 
         //free()is to free the alooted 
         //sizeof() is operator 
         //static memeory need not be erased it memeory is automitic deleted after program ends 
         //in dynamic memeory the memory is not automatically dellocated 
         //mallloc is the memory allocation in which inialisation to zerois not done its used for allocation of memeory while running theprogram
         //calloc -> allocate memeory while runnig the program but intaillised to zero
         //realloc -> when the demands of the memeory increses while ryunning the program so we need the program realloc 
         //free ->  Dyanmic arrays can beerased manually using this cod e
         //Free function deallocates the memory that was requetsed using malloc ,calloc, realloc 
         //after freeing the dynamic memory no elements in that dynamic memory reason shpould be accessible by the program until the same memory reason has been reallocated to the program using other malloc , calloc , realloc calls 
         //int** is used for 2d arrays 
         //int** arr = malloc(rows * sizeof(int*))
         //int* arrays=> a dyanmic 1d arrays 
         //for allocation of columns 
         // for (i=0; i< rows ; i++){
         //inr arr[i]= (int*)malloc(sizeof(int)*columns)}
         //


         //09 october  2026
         //fib series 
         //recurrsion
         //bottom to top approach (for loop)
         //top to down apprpoach divide and conquer rule
         //problems are divided in sub problems and we get solution  this s done through recurrsion 
         //accumation of solution of sub problem is conquer
         //space wise recurrsion is not  beneficial 
         //activation stack got filled takes 
         //recurrisve will take more memeory space as compare to for loop
         //the problem can be break to sub problems 
         //the problem return to the base condition 
         //then recurssive condition 
         //tail recurrison the retended process can be reduced by recurssion 
         //Non Tail recurssion return n*fact(n-1)
         //every activation record stores its own loval variable 
         //tail recurssion the last call is not for multiplication return fact t
         //ensures that after the fnction no need for again call for activation record 
         //then no need to place the next function on the previous 
         //the tail recurssion solve the problem of activation stack or record 
         //code optimisation 
         //why tail recusrssion is optimisation
         //what does argc and argv and its pointer 
         //use of fopen is to acces we accesing the file read write and appending (open and writing after the program )
         //r is for read w is for write 
         //EXIT_FAILURE is  in stdlib 
         //includedinf stdlib is important for file handeling 
         //while(fscanf(file, "%s", buffer)==1)
         //while(fscanf(file,  %[^\n], buffer)==1)
         //while(fget(buffer, 10, file)!=1)
         //regular expression %[^\n]
         //rb is used to read in binary format 
         //evry time the function is called buffer the data is empytied in buffer 
         //every time the buffer is renewed 
         //fclose is for free the pointer 
         //if not file can be corrupted 
         //each string in c is a charater array 
         //fputs is for writinbg in the file 
         //fputs(line[i], file )insidea loop can help to write in the file 
         //fprintf(file , %s, line [i]) is also used to write the 
         //perror is fumction defined in stdio.h 
         //appened line 
         //how actually the data type is stored 
         //what the basic difference between the diffrent type of data type and how actually it store
         //double pointer b
         //












}