#include<stdio.h>

int main(){
   int n = 5;

   for(int i = 0; i <= n; i++){
      for(int j = 1; j <= 2*n; j++){
         if(j>n-i && j<= 2*n-(n-i)){
            printf(" ");
         }
         else{
            printf("*");
         }
      }
      printf("\n");
   }
}