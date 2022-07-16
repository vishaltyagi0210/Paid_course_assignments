#include<stdio.h>
#include<conio.h>
// user input class

int user_input();
int main()
{
    // 1. write a program to print MYSirg 5 times on the screen
    
    int Mysirg = 1;
    int n =user_input() ;
    while(Mysirg<=n)
    {
        printf("MysirG\n");
        Mysirg++;
    }

    // 2. write a program to print the first 10 natural numbers.

    int natural_number = 1;
    n = user_input();
    printf("Printing first %d naturla number\n",n);
    while(natural_number<=n)
    {
        printf("%d\n",natural_number);
        natural_number++;
    }

    // 3. write a program to print the first natural number in reverse order/
    n = user_input();
    printf("printing first %d natural number in reverse order\n",n);
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    
    // 4. write a progrma to print first 10 odd natural number 
    n=user_input();
    printf("printing first %d odd natural number\n",n);
    for(int i = 1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }

    // 5. write a program to print the first 10 odd natural number in reverse order
    n = user_input();
    printf("printing first %d odd natural number in reverse\n",n);

    for(int i = n; i>=1;i--)
    {
        printf("%d\n",2*i-1);
    }

    // 6. write a program to print the first 10 even natural number
    n=user_input();
    printf("Printing first %d even natural number\n",n);

    for(int i = 1;i<=n;i++){
        printf("%d\n",2*i);
    }

    // 7. write a program to print first 10 even natural number in reverse order.
    n = user_input();
    printf("printing first %d even natural number in reverse order\n",n);

    for(int i=n;i>=1;i--)
    {
        printf("%d\n",2*i);
    }

    // 8. write a program to print square of the first 10 natural number
    n = user_input();
    printf("printing the square of first %d natual number\n",n);

    for(int i =1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }

    // 9. write a program to print cubes of the first 10 natural numbers
    n= user_input();
    printf("printing the cube of first %d natural number\n",n);

    for(int i = 1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }

    // 10. write a program to print a table of 5
    n = user_input();
    printf("programa for printing table of %d\n",n);
    for(int i =1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
int user_input()
{   int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    return n;
}