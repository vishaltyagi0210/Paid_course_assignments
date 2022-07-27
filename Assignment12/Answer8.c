// write a binary function to print binary of a given function
#include<stdio.h>
#include<conio.h>

// function declaration
void printing_binary(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printing_binary(number);
}

// function definition
void printing_binary(int number){
   if(number != 0){
      printing_binary(number>>1);
      printf("%d ",number%2);
   }
}