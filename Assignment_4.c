#include<stdio.h>
#include<conio.h>

int main()
{
    // 1. write a program to print MYSirg 5 times on the screen

    int Mysirg = 1;
    while(Mysirg<=5)
    {
        printf("MysirG\n");
        Mysirg++;
    }

    // 2. write a program to print the first 10 natural numbers.

    int natural_number = 1;
    printf("Printing first 10 naturla number\n");
    while(natural_number<=10)
    {
        printf("%d\n",natural_number);
        natural_number++;
    }

    // 3. write a program to print the first natural number in reverse order/
    printf("printing first 10 natural number in reverse order\n");
    int reverse_number = 10;
    while(reverse_number>=1)
    {
        printf("%d\n",reverse_number);
        reverse_number--;
    }

    // 4. write a progrma to print first 10 odd natural number 
    printf("printing first 10 odd natural number");
    for(int i = 1;i<=10;i++)
    {
        printf("%d\n",2*i-1);
    }

    // 5. write a program to print the first 10 odd natural number in reverse order

    printf("printing first 10 odd natural number in reverse\n");

    for(int i = 10; i<=1;i--)
    {
        printf("%d\n",2*i-1);
    }

    // 6. write a program to print the first 10 even natural number

    printf("Printing first 10 even natural number\n");

    for(int i = 1;i<=10;i++){
        printf("%d\n",2*i);
    }

    // 7. write a program to print first 10 even natural number in reverse order.

    printf("printing first 10 even natural number in reverse order\n");

    for(int i=10;i>=1;i--)
    {
        printf("%d\n",2*i);
    }

    // 8. write a program to print square of the first 10 natural number

    printf("printing the square of first 10 natual number\n");

    for(int i =1;i<=10;i++)
    {
        printf("%d\n",i*i);
    }

    // 9. write a program to print cubes of the first 10 natural numbers

    printf("printing the cube of first 10 natural number\n");

    for(int i = 1;i<=10;i++)
    {
        printf("%d\n",i*i*i);
    }

    // 10. write a program to print a table of 5

    printf("programa for printing table of 5\n");
    int table = 5;
    for(int i =1;i<=10;i++)
    {
        printf("%d * %d = %d\n",table,i,table*i);
    }
}