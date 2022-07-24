// write a function to check whether a given number contains a given digit or not.
#include<stdio.h>

//function decleration
int checking_presence(int,int);

// main function
int main(){
   int number,digit;
   printf("Enter a number and digit: ");
   scanf("%d %d",&number,&digit);
   int temp = checking_presence(number,digit);
   temp==0?printf("no %d is not present in %d number\n",digit,number):printf("yes %d is present in %d number\n",digit,number);
}

// function definition
int checking_presence(int number,int digit){
   while(number!=0){
      int temp = number%10;
      if(temp == digit){
         break;
      }
      number/=10;
   }
   return number==0?0:1;
} 