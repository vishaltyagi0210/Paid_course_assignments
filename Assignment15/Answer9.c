// write a function in c to mergae two arrays of the same size sorted in descending order.
#include<stdio.h>

// function declaration
int* decending_order(int* , int size);
int* merging_array(int*,int*, int size,int temp);
// main function
int main(){
   int size,*p,*q,*merged; 
   printf("Enter your size of array: ");
   scanf("%d",&size);
   int array[size];
   int merge[2*size];

   // function callings
   p = decending_order(array,size);
   merged = merging_array(p,merge,size,0);
   q = decending_order(array,size);
   merged = merging_array(q,merge,2*size,size);
   
   //printing function merged
   for(int i = 0; i<2*size; i++){
      printf("%d ",merged[i]);
   }
}
// Function Defination
int* decending_order(int arr[], int size){

   //taking array as input from user
   printf("Enter your array: ");
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }
   
   // sorting array in descending
   for(int i = 0; i<size; i++){
      for(int j = 0; j < (size-1-i); j++){
         if(arr[j]<arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
   return arr;
} 

int* merging_array(int arr[],int merge[],int size, int temp){
   for(int i = 0; i< size; i++){
      merge[temp] = arr[i];
      temp++;
   }
   return merge;
}