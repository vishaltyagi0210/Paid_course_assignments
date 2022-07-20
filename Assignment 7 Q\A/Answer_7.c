#include<stdio.h>
#include<conio.h>
// write a program to print prime number between two numbers.
int main(){
   int first_number, last_number,i,j;
   printf("Enter your first and last number: ");
   scanf("%d %d",&first_number,&last_number);
   
   for(i = first_number; i <= last_number; i++){
      for(j = 2; j < i; j++){
         if(i % j == 0){
         break;
         }
      }
      if(j == i){
         printf("%d ",i);
      }
   }



}