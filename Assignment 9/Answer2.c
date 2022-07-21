#include<stdio.h>
#include<conio.h>

// functions
int user_input();

int main(){
   char UserInputForSwitch;
   while(1){
   printf("Pres a: for addition of two numbers\nPress b: for subtraction\npress c: for division\npress d: for division\npress e: for exit\n");
   printf("enter your number: ");
   scanf("%c",&UserInputForSwitch);
   switch (UserInputForSwitch)
   {
   case 97:
      printf("Enter your two numbers for addition: ");
      int a = user_input();
      int b = user_input();
      printf("Addition is: %d\n",a+b);
      break;
   
   case 98: 
      printf("Enter your two numbers for Subtraction: ");
      int a1 = user_input();
      int b1 = user_input();
      printf("Subtraction is: %d\n",a1<b1? b1-a1: a1-b1);
      break;
   
   case 99: 
      printf("Enter your two numbers for Multiplication: ");
      int a2 = user_input();
      int b2 = user_input();
      printf("Muliplication is: %d\n",a2*b2);
      break;
   
   case 100: 
      printf("Enter your two numbers for division: ");
      int a3 = user_input();
      int b3 = user_input();
      printf("Division is: %f\n",a3/b3);
      break;

   case 101: 
      break;
   
   default:
      printf("invalid........\n");
      break;
   }
   if(UserInputForSwitch == 101){
      break;
   }
   }


}
int user_input(){
   int temp;
   scanf("%d",&temp);
   return temp;
}