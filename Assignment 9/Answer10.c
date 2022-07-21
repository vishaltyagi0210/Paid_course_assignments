#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
   int constant_a, constant_b, constant_c,equation_result,switch_case;
   printf("Enter your equation ax^2 + bx + c: ");
   scanf("%d %d %d", &constant_a,&constant_b,&constant_c);
   
   equation_result = constant_b*constant_b - (4*constant_a*constant_c);
   
   switch_case = equation_result >= 0?1:0;
   int temp = sqrt(constant_b*constant_b - (4*constant_a*constant_c));
   

   switch(switch_case){
      case 1: 
      printf(" %d and %d",(-constant_b+temp)/2*constant_a,(-constant_b-temp)/2*constant_a);
      break;

      case 0: 
      printf("you enter a equation which has imaginary roots.");
      break;
   }
}