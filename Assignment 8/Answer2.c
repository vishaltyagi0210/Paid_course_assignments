#include<stdio.h>

// printing pattern 2
int main(){
   int n = 5;
   for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n; j++){
         if(j <= n-i){
            printf(" ");
         }
         else{
            printf("*");
         }
      }
      printf("\n");
   }
}