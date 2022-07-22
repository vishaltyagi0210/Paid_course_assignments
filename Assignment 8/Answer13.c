#include<stdio.h>

int main(){
   int n = 7;
   char value = 64;

   for(int i = 0; i<= n; i++){
      for(int j = 1; j <= 2*n-1; j++){
         j <= n? value++:value--;
         if(j > n-i && j < 2*n - (n-i)){
            printf(" ");
         }
         else{
            printf("%c",value);
         }
      }
      printf("\n");
      value = 64;
   }
}