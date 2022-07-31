#include<stdio.h>

// function declaration
int factorial(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("%d",factorial(number));
}

// function definition
int factorial(int number){
   int fact = 1;
   if(number == 1){
      return 1;
   }
   fact = number * factorial(number-1);
   return fact;
}