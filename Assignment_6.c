#include<stdio.h>
#include<conio.h>
// class 
int input_class();
// variables 
int sum;
int main()

 {   // 1.write a program to calculate sum of first N natural numbers. 
    int n= input_class();
    for(int i = 1;i<=n;i++)
    {
        sum += i;
    }
    printf("your first %d natural number sum is: %d\n",n,sum);
    
    // 2. write a program to calculete the sum of first N even natural number

    n = input_class();
    for(int i = 1; i<=n;i++)
    {
        sum += (2*i);
    }
    printf("Your sun of first %d even natural number is: %d",n,sum);

    // 3. write a program to calculate sum of first N odd natural numbers

    n = input_class();
    for(int i = 1;i<=n;i++)
    {
        sum += (2*i-1);
    }
    printf("Your sum of first %d odd natural number is: %d",n,sum);

    // 4. write a program to calculate sum of square of first N natural numbers

    n=input_class();

    for(int i =1;i<=n;i++)
    {
        sum += i*i;
    }
    printf("your sum of first %d natural number square is: %d",n,sum);

    //5. write a program to calculate sum of cubes of first N natural numbers

    n = input_class();

    for(int i= 1;i<=n;i++)
    {
        sum += i*i*i;
    }
    printf("your sum of first %d natural number cube is: %d",n,sum);


    // 6. write a program to calculate factorial 

   
    n = input_class();
    int fact = 1;
    for(int i = 1;i<= n ;i++)
    {
        fact = fact * i;
    }
    printf("your factorial of %d is: %d\n",n,fact);

    // 7. write a program to count digits in a given number.

     n = input_class();
    int num = n;
    int count=0;
    for(int i = 1;n!=0;i++)
    {
       n/=10;
       count++;
    }
    printf("YOu enter %d which have %d digits\n",num,count);

    // 8. write a program to check whether a given number 

    n = input_class(); 
    int i;
    for(i =2;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    n==i?printf("%d is a prime number\n",n):printf("%d is not a prime number\n",n);

    // 9. write a program to calculate Lcm of two number;

     n = input_class();
    int a = input_class();
    for( i = n>a?n:a; i< n*a;i++)
    {
        if(i% n ==0 && i%a==0)
        {
            printf("%d is the Lcm of %d and %d\n",i,n,a);
            break;
        }
    }
    if(i==(n*a))
    printf("%d is the lcm of %d and %d",i,a,n);

    
    // 10. write a program to reverse a given number
     n = input_class();
     int l;
    while(n!=0)
    {
       l = n%10;
       printf("%d",l);
       n/=10;
    }
    
}

// declaration of class
int input_class()
{   int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    return a;
}