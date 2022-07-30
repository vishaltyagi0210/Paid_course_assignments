#include<stdio.h>

// function declaration
int array_sum(int *arr,int size);

// main function
int main(){
   int array[10];
   int size_of_array = sizeof(array)/sizeof(array[0]);
   for(int i = 0; i < size_of_array; i++){
      scanf("%d",&array[i]);
   }
   printf("%d",array_sum(array,size_of_array));
}

// function definition
int array_sum( int arr[],int size){
   int sum = 0;
   for(int i = 0; i < size; i++){
      sum += arr[i];
   }
   return sum;
}