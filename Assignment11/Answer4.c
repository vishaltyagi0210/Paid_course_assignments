#include<stdio.h>
#include<conio.h>

// function declaration
int next_prime(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("Your next prime number is: %d",next_prime(number));
}

// function definition
int next_prime(int number){
   int j,i;
   for(  i = number+1; 1 ; i++){
      for( j = 2; j < i ; j = j+1){
         if(i % j == 0){
            break;
         }
      }
      if(j == i)
         break;
   }
   return i;
}