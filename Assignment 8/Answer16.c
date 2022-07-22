#include<stdio.h>

int main(){
   int n = 5;

   for(int rows = 1; rows <= n; rows++){
      for(int columns = 1; columns <= 2*n-1; columns++){
         if(rows == n || columns == n+1-rows || columns == 2*n - 1-(n-rows)){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
}