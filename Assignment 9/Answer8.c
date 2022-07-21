#include<stdio.h>
#include<conio.h>

int main(){
   int number;
   printf("Enter a number: ");
   scanf("%d",&number);

   int switch_case = number<0?1:0;
   switch(switch_case){
      case 1: printf("you enter a negative number so as per question we convert it in positive: %d", -number);
      break;

      case 0:
      printf("you enter a positive number so as per question we convert it in negative: %d",-number );
      break;
   }
}