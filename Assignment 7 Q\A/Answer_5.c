#include<stdio.h>
#include<conio.h>
// write a program to check whether two numbers are co-prime or not;'
int main(){
   int user_input_1, user_input_2,i,j;
   printf("Enter your number: ");
   scanf("%d %d",&user_input_1,&user_input_2);
   int greater_one = user_input_1>user_input_2? user_input_1: user_input_2;
   
   for(i = 2; i < greater_one; i++ ){
      if(user_input_1 % i == 0 && user_input_2 % i == 0){
         printf("Your enter number are not co-prime\n");
         break;
      }
   }
   if(i == greater_one){
   printf("Your enter numbers are co-prime\n");
   }


}