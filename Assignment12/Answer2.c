#include<stdio.h>
#include<conio.h>

// function declaration
void reverse_natural(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   reverse_natural(number);
}

// function definition
void reverse_natural(int number){
   if(number > 0){
      printf("%d ",number);
      reverse_natural(number-1);
   }
}