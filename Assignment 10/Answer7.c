// write a function to calculate the number of combinations one can make from n items and r selected at a time

#include<stdio.h>
#include<conio.h>

// function declaration
int combinations(int,int);
int factorial(int,int);

// main function
int main(){
   int items , spaces;
   printf("Enter your numbers and your spaces to be filled: ");
   scanf("%d %d",&items,&spaces);
   printf("your combinations are: %d",combinations(items,spaces));
}

// function decleration
int combinations(int items, int spaces){ 
   return factorial(items, items-spaces)/factorial(spaces,0);
}

int factorial(int number ,int stop_factorial){
   int result=1;
   for(int i = number; i > stop_factorial; i--){
      result *= i;
   }
   return result;
}

///error throw.