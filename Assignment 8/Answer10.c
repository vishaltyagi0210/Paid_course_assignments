#include<stdio.h>

int main(){
   int n = 4;
   int value = 0;

   for(int rows = 0; rows<=n; rows++){
      for(int columns = 1; columns<=2*n-1; columns++){
         columns <= n? value++:value--;
         if(columns > n-rows && columns < 2*n-(n-rows)){
         printf(" ");
         }
      else{
         printf("%d",value);
      }
      }
      printf("\n");
      value = 0;
   }
}