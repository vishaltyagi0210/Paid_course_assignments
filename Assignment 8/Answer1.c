#include<stdio.h>
#include<conio.h>

//printing pattern 1

int main(){
   int n = 5;
   for(int i = 1; i <= n; i++){
      for(int j = 1; j <= i; j++){
         printf("*");
      }
      printf("\n");
   }
}