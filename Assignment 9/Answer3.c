#include<stdio.h>
#include<conio.h>

int main(){
   int week_day;
   printf("Enter week day number: ");
   scanf("%d",&week_day);
   
   switch(week_day){
      case 1: 
      printf("have a nice day\n");
      break;

   case 2: 
      printf("go to gym\n");
      break;

   case 3: 
      printf("aapka din subh ho\n");
      break;

   case 4: 
      printf("hey have a nice day dude\n");
      break;

   case 5: 
      printf("i know boss kaafi kam kerata hai but dont worry jaldi hii promotion milega\n");
      break;

   case 6: 
      printf("have a good day\n");
      break;

   case 7: 
      printf("go to gym\n");
      break;

   default:
      printf("invalid input\n");
      break;
   }

}