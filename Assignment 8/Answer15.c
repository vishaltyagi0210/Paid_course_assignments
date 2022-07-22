#include<stdio.h>

int main(){
   int n = 5;

   for(int rows = 1; rows <= n; rows++){
      for(int columns = 1; columns<= n; columns++){
         if(columns == 5 || rows == 5 || columns == n+1-rows ){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
}