#include<stdio.h>
#include<conio.h>

int main(){
   int year;
   printf("Enter a number: ");
   scanf("%d",&year);
   year = year %4==0 || year %400 == 0?1:0;
   
   switch(year){
      case 1: printf("yes you enter a leap year\n");
      break;

      case 0: printf("no it is not a leap year\n");
      break;
   }

}