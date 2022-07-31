#include<stdio.h>
#include<conio.h>

// function declaration
int odd_sum(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   printf("%d",odd_sum(number));
}

// function definition
int odd_sum(int number){
   int sum = 0;
   if(number == 0){
      return 0;
   }
   sum = 2*number-1 + odd_sum(number-1);
   return sum;
}