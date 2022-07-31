// write a function to calculate the sum of digits of a given number;
#include<stdio.h>

// function declaration
int calculate_digit_sum(int);

// main function
int main(){
   int number;
   printf("Enter your number: ");
   scanf("%d",&number);
   printf("%d",calculate_digit_sum(number));
}

// function definition
int calculate_digit_sum(int number){
   int sum = 0;
   if(number == 0){
      return 0;
   }
   sum = number%10 + calculate_digit_sum(number/10);
   return sum;
}