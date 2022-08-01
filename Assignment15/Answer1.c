#include<stdio.h>

// function declaration
int greatest_element(int* , int);

// main function
int main(){
   int size;
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   printf("%d",greatest_element(array,size));

}

// function definition
int greatest_element(int *arr , int size){
   printf("Enter your array: \n");
   // taking array as input by user
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   // finding largest element;
   for(int i = 0; i < size-1; i++){
      if(arr[i] > arr[i+1]){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
      }
   }
   return (arr[size-1]);
}