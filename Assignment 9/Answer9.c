#include<stdio.h>
#include<conio.h>

int main(){
   int even_number;
   printf("Enter a number: ");
   scanf("%d",&even_number);

   int switch_case = even_number%2==0?1:0;
   switch(switch_case){
      case 1: printf("your nearest odd number is: %d",even_number-1);
      break;

      default:
      printf("Enter a even number:");
      break;
   }

}