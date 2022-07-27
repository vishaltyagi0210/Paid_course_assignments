// write a recursive function to print first N even natural numbers.
#include<stdio.h>
#include<conio.h>

// function declaration
void printing_even(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printing_even(number);
}

// function definition
void printing_even(int number){
   if(number > 0){
      printing_even(number-1);
      printf("%d ",2*number);
   }
}