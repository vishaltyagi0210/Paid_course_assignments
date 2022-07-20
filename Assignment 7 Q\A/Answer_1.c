#include<stdio.h>
#include<conio.h>


int main(){
  //fbb series {0,1,1,2,3,5,8,13,...}
  int Fibo_Nth, Fibo_A = 0, Fibo_B = 1,Sum; 
  printf("Enter your number: ");
  scanf("%d",&Fibo_Nth);
  
  if(Fibo_Nth==1||Fibo_Nth==2){
    printf("%d ",Fibo_Nth==1?Fibo_A:Fibo_B);
  }
  else{
    for(int i = 3; i<= Fibo_Nth; i++){
      Sum = Fibo_A + Fibo_B;
      Fibo_A = Fibo_B;
      Fibo_B = Sum;
    }
    printf("%d ",Sum);
    }
}