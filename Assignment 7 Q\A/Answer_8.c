#include<stdio.h>
#include<conio.h>

int main(){
   int previous_number,i,j;
   printf("Enter your number: ");
   scanf("%d",&previous_number);
   
   for(i = previous_number+1; ; i++){
      for(j = 2; j < i; j++){
         if(i % j == 0){
            break;
         }
      }
      if(i == j)
      break;
   }
   printf("%d ",i);
}
