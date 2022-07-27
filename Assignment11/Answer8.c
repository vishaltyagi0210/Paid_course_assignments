// write a function to print pascal triangle
#include<stdio.h>
#include<conio.h>

// function declaration
void pascal_triangle(int);
int combination(int , int);
int factorial(int);

// main function
int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);
   pascal_triangle(number);
}

// function definition
void pascal_triangle(int number){
   int i , j ,k , value = 0;
   for( i = 1; i <= number; i++){
      for( j = 1; j <= 2*number-1; j++){
         if( j > number-i && j < 2*number - (number-i) && k){
            printf(" %1d",combination(i-1,value));
            k = 0;value++;
         }
         else{
            printf(" ");
            k = 1;
         }
      }
      printf("\n");
      value = 0;
   }
}

int combination(int items , int spaces){
   return factorial(items)/(factorial(spaces)*factorial(items-spaces));
}

int factorial(int number){
   int temp =1;
   for(int i = number; i >= 1; i--){
      temp *= i;
   }
   return temp;
}