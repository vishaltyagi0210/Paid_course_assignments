// write a function in c to print all unique elements in an array/
#include<stdio.h>

//function declaration
int unique_element(int* , int);

// main function
int main(){
   int size; 
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   unique_element(array,size);
}

int unique_element(int *arr , int size){
   int j;
   printf("Enter your arraY: ");
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   for(int i = 0; i< size;i++){
      for( j = 0; j < size; j++){
         if(arr[i]==arr[j] && i != j){
            break;
         }
      }
      if(j == size){
         printf("%d ",arr[i]);
      }
   }
}