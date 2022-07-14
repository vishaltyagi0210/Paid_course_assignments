#include<stdio.h>
#include<conio.h>
int lsb_bit(int l);
int lsb_total(int l);
void printing_bits(int l);
int main()
{
    // 1.write a program to print unit digit of a given number.
    int unit_digit;
    printf("Enter a number: ");
    scanf("%d",&unit_digit);
    printf("The unit digit of your number is: %d\n\n",unit_digit%10);

    // 2.write a program to print a given number without its last digit.
    int digit;
    printf("Enter a number: ");
    scanf("%d",&digit);
    digit = digit/10;
    printf("Your number without last digit is: %d\n\n",digit);

    //3.write a program to swap values of two int variables.

    printf("Enter two variables: ");
    int a,b,swap;
    scanf("%d %d",&a,&b);
    printf("you enter a=%d and b=%d\n",a,b);
    swap=a;
    a=b;
    b=swap;
    printf("After swapping: a=%d and b=%d\n\n",a,b);

    //4.write a program to swap values of two int variables without using a third variable.
    printf("this swapping is without a third variable\n");
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("you enter a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a=%d and b=%d\n\n",a,b);

    // 5. write a program to input a three-digit number and display the sum of the digits.
    int three_digit,first,second,third;
    printf("Enter a three digit number: ");
    scanf("%d",&three_digit);
    third = three_digit%10;
    second = three_digit/10%10;
    first = three_digit/100;
    printf("you enter: %d\nAnd the sum of all digits is: %d\n\n",three_digit,third+second+first);

    //6. write a program which takes a character as an input and display its  ASCII code.
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("you enter: %c\nits ASCII code is: %d\n\n",ch,ch);

    // 7.write a program to find the position 1 bit LSB.
      // maked a program for this (lsb_bit);
    printf("Enter your bit: ");
    int lsb;
    scanf("%d",&lsb);
     printf("your first bit is on: %d\n",lsb_bit(lsb));
     printf("your total bit is: %d\n",lsb_total(lsb));
     printing_bits(lsb);
     //doubt finding last bit from msb.

    // 8.write a program to check whether the given number is even or odd using bitwise operator.
    printf("Enter your number: ");
    int bitwise;
    scanf("%d",&bitwise);
    bitwise&1==1?printf("%d is an odd number\n\n",bitwise):printf("%d is an even number\n\n",bitwise);

    //9.write a program to print size of int , a float, a char, and a double type.
    printf("%d",sizeof(int));
    printf("%d",sizeof(float));
    printf("%d",sizeof(char));
    printf("%d",sizeof(double));

    // 10. write a program to make the last digit of a number stored in a variable as zero.

    printf("Enter your number: ");
    int number,store_last;
    scanf("%d",&number);
    store_last=number%10;
    printf("you enter: %d\nBut as per question demand your number become: %d\n\n",number,number-store_last);

    // 11. write a program to input a number from the user and also input a digit.append a digit in the number and print the resulting number.
    int num;
    printf("Enter a number and a digit: ");
    scanf("%d %d",&num,&digit);
    printf("you enter number is: %d\nBut as per the question your number become: %d",num,num*10+digit);

    // 12. Assume price of 1 USD is INR 76.23.write a programm to take the amount of INR and convert it into USD.
    printf("Enter INR amount: ");
    int INR;
    scanf("%d",&INR);
    float USD = 76.23;
    printf("you enter %d(in INR)\nAfter converting it into USD your amount is: %f",INR,INR/USD);

    // 13. write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
    
    printf("Enter number: ");
    int n,user_input[12],count=0,temp1,temp2,temp_add=0;
    scanf("%d",&n);
    for(int i=0;n!=0;i++){
     user_input[i]=n%10;
     count++;
     n/=10;
    }

    for(int i=0;i<count/2;i++){
       temp1 = user_input[i+1];
      user_input[i+1]= user_input[count-1-i];
      user_input[count-1-i]=temp1; 
    }

    // converting array into number.
    for(int i=0;i<=count-1;i++){
      for(int j=i;j<=count-1;j++){
        user_input[i]*=10;
        temp2 = user_input[i];
      }
      temp_add+=temp2;
      temp2=0;
    }
    // removing extra zero
    temp_add/=10;
    printf("your output is: %d",temp_add);
    
}
// finding 1 bit.
int lsb_bit(int l){
    int count=1;
    if(l&1==1){
        return count;
    }
    else{
      for(int i=0;l%2==0;i++){
        l>>=1;
        count++;
      }
      // printf("From lsb side your 1 bit is on: %d place\n\n",count);
      return count;
    }
}
// finding total bits.
int lsb_total(int l){
  int lsb_t=l,count=0;
  for(int i=0;lsb_t!=0;i++){
    if(lsb_t&1==1){
      count++;
    }
    lsb_t/=2;
  }
  return count;
}
//printing bits
void printing_bits(int l){
int print=l;
 for(int i=0;print!=0;i++){
  printf("%d ",print%2);
  print/=2;
 }
 }
