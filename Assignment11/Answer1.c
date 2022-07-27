// write a funtiction to calculate LCM of two numbers.
#include<stdio.h>

// function decleration
int lcm(int,int);

// main function
int main(){
   int number, number_1;
   printf("Enter two numbers: ");
   scanf("%d %d",&number,&number_1);
   printf("Your lcm is: %d",lcm(number,number_1));
}

// fuction definition
int lcm(int number , int number_1){
   int i;
   for( i = number>number_1?number:number_1; i < number*number_1 ; i++ ){
      if(i % number == 0 && i % number_1 == 0){
         return i;
      }
   }
   return i;
}