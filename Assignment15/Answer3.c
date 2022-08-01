// write a function to sort an array of any size.
#include<stdio.h>

// function declaration
void sort_array(int* , int);

// main function
int main(){
   int size; 
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   sort_array(array,size);
}

// function definition
void sort_array(int *arr, int size){
   printf("Enter your array: ");
   // taking array as input
   for(int i =0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   // sort array/
   for(int i = 0; i<size-1; i++){
      for(int j = 0; j < size-i-1; j++){
         if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
   //printing
   for(int i = 0; i<size; i++){
      printf("%d ",arr[i]);
   }
}