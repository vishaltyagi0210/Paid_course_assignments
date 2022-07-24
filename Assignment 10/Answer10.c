// write a function to print all prime factors of a given number. for example, if the number  is 36 then your result should be 2,2,3,3
#include<stdio.h>

//function decleration
int prime_factors(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   prime_factors(number);

   return 0;
}

// function definition
int prime_factors(int number){
   for(int i = 2; number > 1 ; i++){
      if(number % i == 0){
         printf("%d ",i);
         number/=i;
         i=1;
      }
   }
}