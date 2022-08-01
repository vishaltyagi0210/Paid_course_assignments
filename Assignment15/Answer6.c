// write a function in c to read n numbers of values in an array and display it in reverse order.
#include<stdio.h>

//function declaration
void reverse_array(int* , int);

//main function
int main(){
   int size;
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   reverse_array(array,size);
}

// function definition
void reverse_array(int *arr, int size){
   printf("Enter your array: ");
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   // reversing array
   for(int i = 0; i < (size/2); i++){
      int temp = arr[i];
      arr[i] = arr[size-1-i];
      arr[size-1-i] = temp;
   }

   // printing array
   for(int i = 0; i<size; i++){
      printf("%d ",arr[i]);
   }
}