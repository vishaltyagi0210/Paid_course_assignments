// write a function to print first N prime number
#include<stdio.h>
#include<conio.h>

//function declaration
void print_prime(int);

// main function
int main(){
   int number;
   printf("Enter your number: ");
   scanf("%d",&number);
   print_prime(number);
}

// function definition
void print_prime(int number){
   int i , j;
   printf("1 ");
   for( i = 2; i <= number; i++){
      for( j = 2; j < i; j++){
         if(i % j  == 0){
            break;
         }
      }
      if(i == j){
         printf("%d ",j);
      }
   }
}