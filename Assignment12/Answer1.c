// write a recursive function to print first N natural numbers.
#include<stdio.h>
#include<conio.h>

// function declaration
void print_natural(int);

// main function
int main(){
   int number ;
   printf("Enter your number: ");
   scanf("%d",&number);
   print_natural(number);
}

// function definition
void print_natural(int number){
   if(number > 0){
   print_natural(number-1);
   printf("%d ",number);
   }
}