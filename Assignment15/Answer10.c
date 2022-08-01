// write a function in c to count the frequency of each element of an array/
#include<stdio.h>

// function declaration
void frequency_of_element(int*,int);

//main function
int main(){
   int size;
   printf("Enter your array size: ");
   scanf("%d",&size);
   int array[size];
   frequency_of_element(array,size);
}

// function definition
void frequency_of_element(int *arr, int size){
   int count = 0,temp,j;
   printf("Enter your array: ");
   for(int i = 0; i<size; i++){
      scanf("%d",&arr[i]);
   }

   // checking frequency
   for(int i = 0; i < size; i++){
      for( j = 0; j<size; j++){
         if(arr[i]==arr[j] && i !=j){
            count++;
         }
      }
      if(temp != arr[i]){
      printf("Your %d frequency is: %d\n",arr[i],count);
      temp = arr[i];
      }
      count=0;
   }
}