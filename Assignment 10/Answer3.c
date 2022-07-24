//3. write a program to check whether a given number is even or odd

#include<stdio.h>

//function decleration
int check_odd_even(int);

// main function
int main(){
   printf("%d",check_odd_even(3));
}

// function definition
int check_odd_even(int number){
   return number & 1?0:1;
}