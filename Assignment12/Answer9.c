// write a recursive function to print octal of a given decimal number.
#include<stdio.h>
#include<conio.h>

// function declaration
void octal_printing(int);

// main function
int main(){
   int number; 
   printf("Enter a number: ");
   scanf("%d",&number);
   octal_printing(number);
}

// function definition
void octal_printing(int number){
   if(number>0){
      octal_printing(number/8);
      printf("%d",number%8);
   }
}