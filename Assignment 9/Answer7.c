#include<stdio.h>
#include<conio.h>

float temp_bill;
int main(){
   int units;
   printf("Enter your units: ");
   scanf("%d",&units);

   switch(units){
      case 1 ... 50:
      temp_bill = units * 0.5;
      printf("Your bill is: %0.2f",temp_bill + (temp_bill/100*20) );
      break;

      case 51 ... 151:
      temp_bill = units * 0.75;
      printf("your bill is: %0.2f",temp_bill + temp_bill/100*20);
      break;

      case 152 ... 252:
      temp_bill = units * 0.75;
      printf("your bill is: %0.2f",temp_bill + temp_bill/100*20);
      break;

      default: 
      temp_bill = units * 1.5;
      printf("your bill is: %0.2f",temp_bill + temp_bill/100*20);
      break;

   }
}

