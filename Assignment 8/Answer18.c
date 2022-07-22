#include<stdio.h>

int main(){
   int n = 5;

   for(int rows = 1; rows <= 2*n-1; rows++){
      for(int columns = 1; columns<= 2*n-1; columns++){
         if(rows <= 5){
         if(columns > n-rows && columns < 2*n - (n-rows)){
            printf("*");
         }
         else{
            printf(" ");
         }
         }
         if(rows >= 6){
            if(columns > rows - n && columns < 2*n - (rows-n)){
               printf("*");
            }
            else{
               printf(" ");
            }
         }
      }
      printf("\n");
   }
}