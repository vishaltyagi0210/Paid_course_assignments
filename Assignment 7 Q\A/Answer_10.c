#include<stdio.h>
#include<conio.h>
// function power
int power_function(int digit, int power);

//
int main(){
   int count,sum,temp,temp_2;
   int i;
   int arm_number_dup;
   int arm_number_dup_2;
   // loop for giving numbers from 1 to 1000
   for( i = 1; i <= 1000; i++){
      // after 1 round all values refressed.
      arm_number_dup = i;
      arm_number_dup_2 = i;
      count = 0,sum = 0,temp = 0,temp_2 = 0;
      
      // count
      while(arm_number_dup!=0){
         count++;
         arm_number_dup/=10;
      }
      // calculations
      while(arm_number_dup_2!=0){
         int temp = arm_number_dup_2%10;
         int temp_2 = power_function(temp,count);
         sum += temp_2;
         arm_number_dup_2/=10;
      }
      // logic
   if(sum == i){
      printf("%d ",sum);
   }
   }

}
// declaration of function.
int power_function(int digit, int power){
   int c = 1;
   for(int i = 1; i<= power; i++){
      c *= digit;
   }
   return c;
}