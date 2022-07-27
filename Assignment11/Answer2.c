// write a function to calculate Hcf of two numbers;
#include<stdio.h>
#include<conio.h>

// function  declaration
int hcf(int,int);

// main function
int main(){
   int number, number_1;
   printf("Enter two numbers: ");
   scanf("%d %d",&number,&number_1);
   printf("Your HCF is: %d",hcf(number,number_1));
}

// function definition
int hcf(int number, int number_1){
   int i;
   for( i = number > number_1?number_1:number; i > 1; i--){
      if(number % i == 0 && number_1 % i == 0){
         return i;
      }
   }
   return 1;
}