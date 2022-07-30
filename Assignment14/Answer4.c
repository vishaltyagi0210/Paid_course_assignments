#include<stdio.h>

// function declaration
int greater_element(int *arr);

// main function
int main(){
   int array[10];
   for(int i = 0; i < 10; i++){
      scanf("%d",&array[i]);
   }
   printf("%d",greater_element(array));
}

// function definition
int greater_element(int arr[]){
   for(int i = 0; i < 9; i++){
      if(arr[i] > arr[i+1]){
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
      }
   }
   return arr[9];
}