// write a program to sort elements of an array of size 10 take array values from the user.
#include<stdio.h>

// function declaration
void sort_array(int *arr);

// main function
int main(){
   int array[10];
   sort_array(array);
}

void sort_array(int arr[]){
   printf("Enter your array numbers (n): ");
   for(int i = 0; i < 10; i++){
      scanf("%d",&arr[i]);
   }

   // sorting of array
   for( int i = 0; i < 9; i++){
      for(int j = 0; j < 9-i; j++){
         if(arr[j] > arr[j+1]){
         int temp = arr[j];
         arr[j] = arr[j+1];
         arr[j+1] = temp;
         }
      }
   }
   

   // printing sorted array
   for(int i = 0 ; i < 10; i++){
      printf("%d ",arr[i]);
   }
}