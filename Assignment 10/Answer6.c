// write a function to claculate the factorial of a number.

#include<stdio.h>

// function declaration
int factorial(int);

// main function
int main(){
   int number;
   printf("Enter a number for finding factorial: ");
   scanf("%d",&number);
   printf("factorial of: %d is %d",number,factorial(number));
}

// function definition
int factorial(int number){
   int result=1;
   for(int i = number; i >= 1; i-- ){
      result *= i;
   }
   return result;
}