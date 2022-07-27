// write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>

// function declaration
void printing_even_reverse(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printing_even_reverse(number);
}

// function definition
void printing_even_reverse(int number){
   if(number > 0){
      printf("%d ",2*number);
      printing_even_reverse(number-1);
   }
}