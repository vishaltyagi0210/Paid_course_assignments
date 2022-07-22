#include<stdio.h>

int main(){
   int n = 4;
   int value = 1;

   for(int i = 1; i <= n; i++){
      for(int j = 1; j <= 2*n-1; j++){
         if(j >= i && j <= 2*n-i){
            printf("%d",value);
            j < n? value++:value--;
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
      value =1;
   }
}