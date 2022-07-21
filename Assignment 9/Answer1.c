#include<stdio.h>
#include<conio.h>

int main(){
   int month_number;
   printf("Enter a number: ");
   scanf("%d",&month_number);
   
   switch(month_number){
   case 1:
      printf("January have 31 days.\n");
      break;
      
   case 2:
      printf("February have 28 days.\n");
      break;
   
   case 3:
      printf("March have 31 days.\n");
      break;
   
   case 4: 
      printf("April have 30 days\n");
      break;
   
   case 5:
      printf("May have 31 days\n");
      break;
   
   case 6:
      printf("june have 30 days\n");
      break;
   
   case 7: 
      printf("july have 31 days\n");
      break;
   
   case 8: 
      printf("August have 31 days\n");
      break;
   
   case 9: 
      printf("September have 30 days\n");
      break;
   
   case 10: 
      printf("October have 31 days\n");
      break;
   
   case 11: 
      printf("November have 30 days\n");
      break;
      
   case 12: 
      printf("December have 31 days\n");
   
   default:
      printf("invalid input\n");
      break;
   }
}