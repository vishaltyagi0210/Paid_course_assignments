#include<stdio.h>
#include<conio.h>

int main(){
   int i , j;
   for( i = 3; i<=100; i++){
      for(j = 2; j < i; j++){
         if(i % j == 0){
            break;
         }
      }
      if(i == j){
         printf("%d ",j);
      }
   }
}