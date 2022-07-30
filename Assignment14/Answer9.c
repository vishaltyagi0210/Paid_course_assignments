// write a program in c to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>

// function declaration
void reverse_array(int *arr,int);

// main function
int main(){
   printf("Enter array size: ");
   int array_size; 
   scanf("%d",&array_size);
   int array[array_size];
   reverse_array(array,array_size);
}

// function definition
void reverse_array(int arr[],int array_size){
   printf("Enter your array: ");
   for(int i = 0; i < array_size; i++){
      scanf("%d",&arr[i]);
   }

   //reversing array
   for(int i = 0; i < array_size/2; i++){
      int temp = arr[i];
      arr[i] = arr[array_size-1-i];
      arr[array_size-1-i] = temp;
   }

   // printing result
   for(int i = 0; i < array_size; i++){
      if(i==0){
         printf("Here is your reversed array: ");
      }
      printf("%d ",arr[i]);
   }
}