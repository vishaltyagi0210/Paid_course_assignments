#include<stdio.h>

// function declaration
int smaller_element(int *arr);

// main function
int main(){
   int array[10];
   printf("Your smaller number is: %d",smaller_element(array));
}

// function definition
int smaller_element(int arr[]){
   printf("Enter your array numbers: ");
   for(int i = 0; i < 10; i++){
      scanf("%d",&arr[i]);
   }
   for(int i = 0; i < 9; i++){
      if(arr[i] < arr[i+1]){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
      }
   }
   return arr[9];
}

