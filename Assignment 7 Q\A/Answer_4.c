#include<stdio.h>
#include<conio.h>
// write a program to calculete HCF of two numbers.
int main(){
   int user_input_1, user_input_2, i , j;
   printf("Give two numbers for finding HCF: ");
   scanf("%d %d",&user_input_1,&user_input_2);
   
   for(i = user_input_1>user_input_2? user_input_1: user_input_2; i > 1; i--){
      if(user_input_1 % i ==0 && user_input_2 % i == 0){
         printf("Your HCF is: %d",i);
         break;
      }
   }
   if(i == 1){ 
   printf("Your HCF is 1");
   }
}