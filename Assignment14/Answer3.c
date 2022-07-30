#include<stdio.h>

// function declaration 
void sum_even_odd(int *arr);

// main function
int main(){
   int array[10];
   printf("enter your array numbers: \n");
   for(int i = 0; i<10; i++){
      scanf("%d",&array[i]);
   }
   sum_even_odd(array);
   
}

// function definition
void sum_even_odd(int array[]){
   int sum_even = 0 , sum_odd = 0;
   for(int i = 0; i < 10; i++){
      if(array[i] % 2){
         sum_odd += array[i];
      }
      else{
         sum_even += array[i];
      }
   }
   printf("Your odd number sum is: %d\nYour sum of all even number is: %d",sum_odd,sum_even);
}