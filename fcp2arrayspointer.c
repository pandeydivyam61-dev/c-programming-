#include <stdio.h>
int main(){
      int arr[2][3] ={{1,2,3}};
      int* ptr 

      int (*ptr_1)[3] = matrix;
      for(int i = 0; i< 2; i++){
        for (int j = 0; j< 2; j++){
            printf("%d" , ptr_1[i][j]);  //matrix[][] is basically 2 D indexing
        }
        printf("\n");

      }


}