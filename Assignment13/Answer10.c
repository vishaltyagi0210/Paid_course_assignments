// write a program in c to calculate the power of any number using recursion
#include<stdio.h>

// function declaration
int power_function(int,int);

// main function
int main(){
   int number, power;
   printf("Enter your number and power: ");
   scanf("%d %d",&number,&power);
   printf("%d",power_function(number,power));
}

// function definition
int power_function(int number, int power){
   int product = 1;
   if(power == 0){
      return 1;
   }
   product = product * number * power_function(number,power-1);
   return product;
}