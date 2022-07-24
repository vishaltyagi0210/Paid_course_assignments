// write a function to print first N odd natural numbers.

#include<stdio.h>
#include<conio.h>

//function decleration
int printing_odd_num(int);

//main function
int main(){
   int N_term;
   printf("Enter Nth term: ");
   scanf("%d",&N_term);
   printing_odd_num(N_term);
}

// function definition
int printing_odd_num(int N_term){
   for(int number = 1; number <= N_term; number++){
      printf("%d ",2*number-1);
   }
}