#include<stdio.h>

// decleration of function
int permutation(int,int);

//main function
int main(){
   int items, spaces;
   printf("Enter your items and number of empty spaces where you want permutauion: ");
   scanf("%d %d",&items,&spaces);
   printf("Your permutauion is: %d",permutation(items,items-spaces));
}

//function definition

int permutation(int number, int stop_factorial){
   int result = 1;
   for(int i = number; i > stop_factorial; i--){
      result *= i;
   }
   return result;
}