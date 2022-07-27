// write a function to print all prime numbers between two given numbers.
#include<stdio.h>
#include<conio.h>

// function declaration
void print_prime(int , int);

// main function
int main(){
   int start_from , end_on;
   printf("Enter starting number and ending number: ");
   scanf("%d %d",&start_from,&end_on);
   print_prime(start_from,end_on);
}

// function definition
void print_prime(int start_from, int end_on){
   int i , j;
   for(i = start_from; i <= end_on; i++){
      for( j = 2; j < i; j++){
         if(i % j == 0){
            break;
         }
      }
      if( i == j ){
         printf("%d ",i);
      }
   }
}