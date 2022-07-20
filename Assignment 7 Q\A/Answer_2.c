#include<stdio.h>
#include<conio.h>

int main(){
   int Fibo_N, Fibo_A = 0, Fibo_B = 1, Sum;
   printf("Enter your number: ");
   scanf("%d",&Fibo_N);
   
   for(int i = 1; i <= Fibo_N; i++){
      if(i == 1 || i == 2){
         printf("%d ",i == 1? Fibo_A: Fibo_B);
      }
      else{
         Sum = Fibo_A + Fibo_B;
         printf("%d ",Sum);
         Fibo_A = Fibo_B;
         Fibo_B = Sum;
      }
   }
}