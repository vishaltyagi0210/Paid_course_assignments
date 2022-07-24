// write a function to calculate simple interest.
#include<stdio.h>

// function declaration
float simple_interest(int, float, int);

//main function
int main(){
   printf("Your interest on your principle amount is: %0.2f",simple_interest(10000,10,2));
}

//function definition
float simple_interest(int principle, float rate, int time){
   return principle*(rate/100)*time;
}