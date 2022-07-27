// write a program in c to find the sum of the series 
#include<stdio.h>
#include<conio.h>

// function declaration
void sum_series(int);
int factorial(int);

// main function
int main(){
   int number;
   printf("Enter your number: ");
   scanf("%d",&number);
   sum_series(number);
}

// function definition
void sum_series(int number){
   int sum=0;
   for(int i = 1; i<= number-1; i++){
      int temp = i;
      int temp1 = factorial(i+1);
      sum += temp + temp1;
   }
   sum += (number+1);
   printf("sum is: %d",sum);
}

int factorial(int number){
   int temp = 1;
   for(int i = number; i>=1; i--){
      temp *= i;
   }
   return temp;
}