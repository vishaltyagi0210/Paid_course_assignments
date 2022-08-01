#include<stdio.h>

// function declaration
int* reverse_function(int*,int first,int last);
void print_array(int*,int);

//main function
int main(){
   int size,n,*p; 
   printf("Enter your array size and no of rotations: ");
   scanf("%d %d",&size,&n);
   int array[size];
   
   // taking array as input
   for(int i = 0; i<size; i++){
      scanf("%d",&array[i]);
   }


   int direction;
   printf("for right rotation press 0 and for left rotation press 1: ");
   scanf("%d",&direction);
   switch(direction){
   //calling function
      case 0:
      //reversing array from n to last;
      p = reverse_function(array,size-n,size-1);
      // reversing remaining array from first to n;
      p = reverse_function(p,0,size-n-1);
      // reversing whole array for output 
      p = reverse_function(p,0,size-1);
      //printing array by calling function
      print_array(p,size);
      break;

      case 1:
      //reversing array from 0 to n;
      p = reverse_function(array,0,n-1);
      // reversing remaining array from n-1 to size-1
      p = reverse_function(p,n,size-1);
      //reversing whole array
      p = reverse_function(p,0,size-1);
      //printing array by calling function
      print_array(p,size);
      break;
   }
}

// function definition
int* reverse_function(int arr[] ,int first, int last){
   while(first < last){
      int temp = arr[first];
      arr[first] = arr[last];
      arr[last] = temp;
      first++;
      last--;
   }
   return arr;
}

void print_array(int *arr,int size){
   for(int i = 0; i<size;i++){
      printf("%d ",arr[i]);
   }
}