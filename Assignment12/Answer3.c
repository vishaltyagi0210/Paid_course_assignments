#include<stdio.h>
#include<conio.h>

// function declaration
void printing_odd(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printing_odd(number);
}

// function definition
void printing_odd(int number){
   if(number > 0){
      printing_odd(number-1);
      printf("%d ",2*number-1);
   }
}