#include<stdio.h>
#include<conio.h>

// function declaration
int add_odd(int);

// main function
int main(){
int number;
printf("Enter your number: ");
scanf("%d",&number);
printf("%d",add_odd(number));
}

// function definition
int add_odd(int number){
   int sum = 0 , a,b,c;
   if(number == 0){
      return 0;
   }
   sum = 2*number-1 + add_odd(number-1);
   return sum;
}