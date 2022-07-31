// write a recursive function to calculate sum of first N natral numbers.
#include<stdio.h>

// function declaration
int natural_sum(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("%d",natural_sum(number));
}

// function definition
int natural_sum(int number){
   int sum=0;
   if(number == 0){
      return 0;
   }
   sum = number + natural_sum(number-1);
   return sum;
}