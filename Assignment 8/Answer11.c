#include<stdio.h>

int main(){
   int n = 5;
   char value = 'A';

   for(int i = 1; i <= n; i++){
      for(int j = 1; j <= 2*n-1; j++){
         if(j > n-i && j <= n+i-1){
            printf("%c",value);
            j < n? value++:value--;
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
      value = 'A';
   }
}