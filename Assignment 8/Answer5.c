#include<stdio.h>

// pattern 5 printing

int main(){
   int n = 5;
   for(int i = 1; i <= n; i++){
      for(int j = 1; j <= (2*n)-1; j++){
         if(j > n-i && j <= n+i-1){
            printf("*");
         }
         else{ 
            printf(" ");
         }
      }
      printf("\n");
   }
}