#include<stdio.h>
#include<conio.h>

// function declearation
int prime_or_not(int);

//main function
int main(){
   int number; 
   printf("Enter your number: ");
   scanf("%d",&number);
   prime_or_not(number)?printf("Your entered a prime number"):printf("No you don't enter a prime number");
}

// function definition
int prime_or_not(int number){
   int i;
   for(int i = 2; i < number; i++){
      if(number % i == 0){
         return 0;
      }
   }
   return 1;
}