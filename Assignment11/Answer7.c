// write a function to print first N terms of fibonacci series 
#include<stdio.h>
#include<conio.h>

// function declaration
void print_fibonacci(int);

// main function
int main(){
   int number; 
   printf("Enter a number: ");
   scanf("%d",&number);
   print_fibonacci(number);
}

// function definition
void print_fibonacci(int number){
   int first = 0 , second = 1, sum;
   for( int i = 0; i < number; i++){
      if( i == 0 || i == 1){
         printf("%d number is: %d\n",i==0?0:1,i==0?first:second);
      }
      else{
         sum = first + second;
         printf("%d number is: %d\n",i,sum);
         first = second;
         second = sum;
      }
   }
}