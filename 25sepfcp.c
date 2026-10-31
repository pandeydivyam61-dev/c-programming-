#include <stdio.h>
#include <stdlib.h>

int main(){
    int n ;

    scanf("%d", &n);
    //Dynamic memeory allocation
    //Dyanmic memeory heap
    int* array = (int*)malloc(40*4);
    //data_type* array = (data_type*)malloc(sizeof(data)*num_elements);
    
    //intialisiation arrays of elemnts 
    for(int i =0 ; i<n ; i++){
        array[i]= i+1;
    }

    //Printing arrays elemnts 
     for(int i =0 ; i<n ; i++){
        printf("Elements %d is %d\n", i)
        free(array)
    }


}