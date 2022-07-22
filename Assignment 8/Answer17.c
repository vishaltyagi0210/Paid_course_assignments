#include<stdio.h>

int main(){
   int n = 5;

   for(int rows = 1; rows<=n; rows++){
      for(int columns= 1; columns <= 2*n-1; columns++){
         if(rows == 1 || columns == rows || columns == 2*n - rows ){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
}