// write a program in c to copy the elements of one array into another array. take array values from the user.
#include<stdio.h>

//function declaration
void copy_array(int *arr,int);

// main function
int main(){
   int size;
   printf("Enter the size of your array: ");
   scanf("%d",&size);
   int array[size];
   copy_array(array,size);
}

// function definition
void copy_array(int arr[],int size){
   int array_1[size];
   printf("Enter your array: ");
   for(int i = 0; i < size; i++){
      scanf("%d",&arr[i]);
   }

   for(int i = 0; i<size; i++){
      array_1[i] = arr[i];
      
   }

   for(int i = 0 ; i<size; i++){
      if(i == 0){
         printf("copy array: ");
      }
      printf("%d ",array_1[i]);
   }
   printf("\n");
   for(int i = 0 ; i<size; i++){
      if(i == 0){
         printf("original array: ");
      }
      printf("%d  ",arr[i]);
   }
} 