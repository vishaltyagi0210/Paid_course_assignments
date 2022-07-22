#include<stdio.h>

// printing pattern 3
int main(){
   int n = 5;
   for(int i = 5; i >= 1; i--){
      for(int j = 1; j <= n; j++){
         if(j <= i){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
}