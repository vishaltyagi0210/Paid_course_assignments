// write a program in c to find the square of any number using the function.
#include<stdio.h>
#include<conio.h>

// function declaration
float square(float);

// main function
int main(){
   float number;
   printf("Enter a number: ");
   scanf("%f",&number);
   printf("%0.2f",square(number));
}

// function definition
float square(float number){
   return number*number;
}