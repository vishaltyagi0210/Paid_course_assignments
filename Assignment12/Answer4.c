// write a recursive function to print the first N odd natural number in reverse order.
#include<stdio.h>
#include<conio.h>

// function declaration
void reverse_odd(int);

// main function
int main(){
   int number; 
   printf("Enter a number: ");
   scanf("%d",&number);
   reverse_odd(number);
}

// function definition
void reverse_odd(int number){
   if(number > 0){
      printf("%d ",2*number-1);
      reverse_odd(number-1);
   }
}