#include<stdio.h>
#include<conio.h>

// function declaration
int add_square(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("%d",add_square(number));
}

// function definition
int add_square(int number){
   int sum = 0;
   if(number == 1){
      return 1;
   }
   sum = number*number + add_square(number-1);
   return sum;
}