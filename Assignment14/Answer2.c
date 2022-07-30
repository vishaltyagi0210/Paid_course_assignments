#include<stdio.h>

// function declaration
int average_array(int *array);

// main function 
int main(){
   int array[10];
   printf("Enter your numbers which you want to store in array: \n");
   for(int i = 0; i < 10; i++){
      scanf("%d",&array[i]);
   }
   printf("Your average is: %d",average_array(array));
}

// function definition
int average_array(int array[]){
   int sum = 0;
   for(int i = 0; i < 10; i++){
      sum += array[i];
   }
   return sum/10;
}