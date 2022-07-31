// write a recursive function to calculate HCF of given number/
#include<stdio.h>

// function declaration
void hcf(int , int);

// main function
int main(){
   int number_1, number_2;
   printf("Enter your two numbers: ");
   scanf("%d %d",&number_1,&number_2);
   hcf(number_1,number_2);
}

// function definition
void hcf(int num_1 , int num_2){
   int greater = (num_1>num_2?num_1:num_2);
   int smaller = (num_1<num_2?num_1:num_2);
   int result;

   if(greater % smaller){
      result = (greater % smaller);
      hcf(result,smaller);
   }
   else{
      printf("%d",smaller);
   }
}