// write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
#include<conio.h>
// function declaration
float area_of_circle(int);

// main function
int main(){
   printf("Your circle area is: %0.3f",area_of_circle(1));
}

// function definition

float area_of_circle(int radius){
   return 3.14*radius*radius;
}