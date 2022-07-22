#include<stdio.h>

int main(){
   int n = 5;
   
   for(int rows = 1; rows <= n; rows++){
      for(int columns = 1; columns <= n; columns++){
         if(columns==1 || rows == n || rows == columns){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
}