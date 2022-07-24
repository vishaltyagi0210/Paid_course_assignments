// 4.write a function to print first N natural number

#include<stdio.h>

// function decleration
void natural_number(int);

//main function
int main(){
   int N_term;
   printf("Enter your N term: ");
   scanf("%d",&N_term);
   natural_number(N_term);
}

// function definition
void natural_number(int N_term){
   for(int numbers = 1; numbers <= N_term; numbers++){
      printf("%d ",numbers);
   }

}