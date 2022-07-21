#include<stdio.h>
#include<conio.h>

// variables 
int side1, side2, side3;
char switch_cases;

// input class
int user_input();

// main function
int main(){
   do{
   printf("press a: for checking isocelcous or not\npress b: for checking right angle triangle or not\npress c: for checkign equilateral or notpress d: for exit\n");
   printf("Enter your choice: ");
   scanf("%c",&switch_cases);
   
      switch(switch_cases){
         case 97:
            printf("Enter three sides: ");
            side1 = user_input();
            side2 = user_input();
            side3 = user_input();
      
            if(side1 == side2 || side2 == side3 || side3 == side1){
               printf("yes it is an isocelcous triangle\n");
            }
            else{
               printf("no it is not an isocelous triangle\n");
            }
         break;

         case 98: 
            printf("Enter your base altitude and hypoteneous: ");
            side1 = user_input();
            side2 = user_input();
            side3 = user_input();
      
            if((side1*side1) + (side2*side2) == side3*side3){
               printf("yes it is a right angle triangle\n");
            }
            else{
               printf("no is it not a right angle triangle\n");
            }
         break;

         case 99: 
            printf("Enter your sides of triangle: ");
            side1 = user_input();
            side2 = user_input();
            side3 = user_input();
      
            if(side1 == side2 && side2 == side3 && side3 == side1){
               printf("yes it is an equilateral triangle\n");
            }
            else{
               printf("no it is not an equilateral truangle\n");
            }
         break;

      }
   }while(switch_cases != 100);
}
int user_input(){
   int temp;
   scanf("%d",&temp);
   return temp;
}