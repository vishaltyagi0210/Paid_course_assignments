// write a program to fund second largest in an array. Take array valuse from the user.
#include<stdio.h>

// function declaration
int second_largest(int *arr);

// main function
int main(){
   int array[10];
   printf("%d",second_largest(array));
}

// function definition
int second_largest(int arr[]){
   int n;
   printf("Enter your array: ");
   for( int i = 0; i < 10; i++){
      scanf("%d",&arr[i]);
   }
   printf("Enter your largest N number term (Example: 2,3...): ");
   scanf("%d",&n);
   for(int i = 0; i < n; i++){
      for(int j = 0; j < 9-i; j++){
         if(arr[j] > arr[j+1]){
         int temp = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = temp;
         }
      }
   }
   return arr[10-n];
}