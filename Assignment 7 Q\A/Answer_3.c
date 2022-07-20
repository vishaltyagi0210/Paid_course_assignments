#include<stdio.h>
#include<conio.h>
// write a program to check whether a given number is there in the fbb series or not.
int main(){
   int Check_fibo, Fibo_A = 0, Fibo_B = 1, Sum = 0;
   printf("Enter your number: ");
   scanf("%d",&Check_fibo);
   
   while(Sum < Check_fibo){
      Sum = Fibo_A + Fibo_B;
      Fibo_A = Fibo_B;
      Fibo_B = Sum;
   }
   Sum == Check_fibo?
      printf("You entered number is present in fbb series\n"):
      printf("your entered number is not present in fibonacci series\n");
}