// write a program to count the digits of a given number using recursion
#include<stdio.h>

// function declaration
int count_digit(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("%d",count_digit(number));
}

// function definition
int count_digit(int number){
   int count = 0;
   if(number > 0){
      count++;
      count_digit(number/10);
      return count;
   }
}