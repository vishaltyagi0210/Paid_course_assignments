#include<stdio.h>

// function declaration
int fibo_series(int);

// main function
int main(){
   int number; 
   printf("Enter a number: ");
   scanf("%d",&number);
   for(int i = 0; i<=number; i++){
   printf("%d ",fibo_series(i));
   }
}

// function definition
int fibo_series(int number){
   int sum =  0;
   if(number == 0){
      return 0;
   }
   if(number == 1){
      return 1;
   }
   sum = fibo_series(number-2) + fibo_series(number-1);
   return sum;
}