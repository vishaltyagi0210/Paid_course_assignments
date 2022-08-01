// write a function to find the smallest number ftom the given array of any size
#include<stdio.h>

// function declaration
int smallest_number(int* , int);

// main function
int main(){
   int size;
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   printf("%d",smallest_number(array,size));
}

// function definition
int smallest_number(int *arr , int size){
   printf("Enter your array: \n");

   // taking user input
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   // shifting smallest elment in the last
   for(int i =0; i<size-1; i++){
      if(arr[i] < arr[i+1]){
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
      }
   }
   return arr[size-1];
} 