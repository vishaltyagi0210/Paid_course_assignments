// write a function to find the first occurrence of adjacent duplicate values in the array.
#include<stdio.h>

// function declaration
int adjacent_array(int*,int);

//main function 
int main(){
   int size;
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   printf("%d",adjacent_array(array,size));
}

//function definition
int adjacent_array(int *arr, int size){
   printf("Enter your array: ");
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   for(int i = 0; i<size-2; i++){
      if(arr[i]==arr[i+1]){
         printf("Your first adjocent duplicate is on %d index and that is\n",i+2);
         return arr[i];
      }
   }
}