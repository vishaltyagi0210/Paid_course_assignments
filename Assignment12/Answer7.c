// write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>

// function declaration 
void printing_square(int);

// main function 
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printing_square(number);
}

// function definition 
void printing_square(int number){
   if(number > 0){
      printing_square(number-1);
      printf("%d ",number*number);
   }
}