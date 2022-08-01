// write a function in c to count a total number of duplicate elements.
#include<stdio.h>

//function declaration
int duplicate_count(int* , int);

// main function
int main(){
   int size;
   printf("Enter size of your array: ");
   scanf("%d",&size);
   int array[size];
   printf("%d",duplicate_count(array,size));
}

// functtion definition
int duplicate_count(int *arr, int size){
   int count = 0;
   printf("Enter your arraY: ");
   for(int i = 0; i<size;i++){
      scanf("%d",&arr[i]);
   }
   for(int i = 0; i<=size/2; i++){
      for(int j = i; j<size;j++){
         if(arr[i] == arr[j+1]){
            count++;
         }
      }
   }
   return count;
}