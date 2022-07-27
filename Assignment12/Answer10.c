// write a recursive function to print reverse of a given number.
#include<stdio.h>
#include<conio.h>

// function declaration
void reverse_number(int);

// main function 
int main(){
   int number; 
   printf("Enter a number: ");
   scanf("%d",&number);
   reverse_number(number);
}

// function definition
void reverse_number(int number){
   if(number>0){
      printf("%d",number%10);
      reverse_number(number/10);
   }
}