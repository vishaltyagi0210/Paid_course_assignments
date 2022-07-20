#include<stdio.h>
#include<conio.h>
// function defi.
   int power_function(int digit , int power);
// 9. write a program to check whether a number is an armstrong number or not.
 int main(){
   int arm_number, count = 0,sum;
   printf("Enter number which you want to check: ");
   scanf("%d",&arm_number);
   int arm_number_dup = arm_number;
   int arm_dup_3 = arm_number;
   
   while(arm_number!=0){
      count++;
      arm_number/=10;
   }
   
   while(arm_number_dup!=0){
      int temp = arm_number_dup%10;
      int temp2 = power_function (temp,count);
      sum += temp2;
      arm_number_dup/=10;
   }
   if(arm_dup_3==sum){
      printf("you enter an armstrong number\n");
   }
   else{
      printf("you don't enter an armstrong number\n");
   }
}
// declaration
   int power_function(int digit, int power){
      int c = 1;
      for(int i = 1; i<= power; i++){
         c *= digit;
      }
      return c;
   }