#include<stdio.h>
#include<conio.h>
// variables used in program
int a,b,c,d,e;
int main()
{
    // 1. write a program to check whether a given number is positive or non-positive.
    printf("Enter your number: ");
    scanf("%d",&a);
    a<=0?printf("%d is a non-positive number\n",a):printf("%d is a positive number\n",a);

    // 2.write a program to check whether a given number is divisible by 5 or not.
    printf("Enter your number: ");
    scanf("%d",&a);
    a%5==0?printf("%d is divisible by 5\n",a):printf("%d is not divisible by 5\n",a);

    //3.write a program to check whether a given number is an even or an odd number.
    printf("Enter a number: ");
    scanf("%d",&a);
    a%2==0?printf("%d is a even number\n",a):printf("%d is an odd number\n",a);

    // 4. write a program to check whether a given number is an even number or an odd number without using % operator..

    printf("Enter a number: ");
    scanf("%d",&a);
    int divide = a/2;
    a-divide*2==0?printf("%d is an even number\n",a):printf("%d is an odd number\n",a);

    //5. write a program to check whether a given number is a three-digit number or not.
    printf("Enter a number: ");
    scanf("%d",&a);
    a>=100&&a<=999?printf("%d is a three-digit number\n",a):printf("%d not an three-digit number\n",a);

    // 6. write a program to print greater between two numbers.print one number of both are the same.

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    // if both numbers are same.
    a==b?printf("you enter same numbers: %d\n",a):
    // if both are different.
    a<b?printf("%d is greater then %d\n",b,a):printf("%d is greater than %d\n",a,b);

    // 7.write a program to check whether roots of a given quadratic equation are real & distinct&real&equal or imaginary.
    printf("Enter your quadratic equation\nax^2+bx+c: ");
    scanf("%d %d %d",&a,&b,&c);
    int formula =(b*b)-(4*a*c);
    // for imaginary roots.
    formula<0?printf("%dx^2+%dx+%d have imaginary roots",a,b,c):
    // for real and equal roots
    formula==0?printf("%dx^2+%dx+%d have real and equal roots",a,b,c):
    // for real and unequal roots
    formula>0?printf("%dx^2+%dx+%d have real and unequal roots",a,b,b):
    //default
    printf("enter in right format"); 

    // 8.write a program to check whether a given year is a leap or not.
    printf("Enter year: ");
    scanf("%d",&a);
    a%4==0?printf("%d is a leap year\n",a):printf("%d is not a leap year\n",a);

    // 9.write a program to find the greater among three given numbers.print number once if the greater number appears two or three times.

    printf("Enter thrree numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    // if three numbers are equal

    if(a==b && b==c && c==a){
    printf("%d is greater",a);
    }
    // if two numbers are same a,b

    else if(a==b){
    a<c?printf("%d is greater than %d\n",c,a):
    printf("%d is greater than %d\n",a,c);
    }
    // if b,c is same

    else if(b==c){
        c<a?printf("%d is greater than %d\n",a,c):printf("%d is greater than %d\n",c,a);
    }
    // if c,a are equal
   
    else if(c==a){
        a<b?printf("%d is greater than %d\n",b,a):printf("%d is greater than %d\n",a,b);
    }

    // if the three numbers are different.
    if(a!=b && b!=c && c!=a){
    a<b?b<c?printf("%d is greatest among %d %d\n",c,a,b):printf("%d is greatest among %d %d\n",b,a,c):
    //else case
    a<c?printf("%d is greatest among %d %d\n",c,a,b):printf("%d is greatest among %d %d",a,b,c);
    }

    // 10.write a program to take cost price and selling price of a product from the user. now calculate and print profit and loss percentage.

    printf("Enter selling price and cost price: ");
    float sp,cp;
    scanf("%f %f",&sp,&cp);
    if(sp==cp){
        printf("no profit no loss\n");
    }else{
    sp>cp?printf("your profit percent is: %0.1f\n",(sp-cp)/cp*100):printf("your loss percent is: %0.1f\n",(cp-sp)/cp*100);
    }

    // 11. write a program to take marks of 5 subjects from the user. assume marks are given out of 100 and passing marks is 33. now display whether the candidate passed the examination or failed.

    int marks[]={a,b,c,d,e},count=0;
    float sum;
    printf("Enter your 5 subjects marks: ");
    // entering the numbers in an array.
    for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
    }
    // sum of the entered number
    for(int i=0;i<5;i++){
        sum+=marks[i];
        if(marks[i]>100){
        printf("invalid marks!!!!!!!!!!!!!!!!!!\n");
        break;
        }
        if(marks[i]<33)
        count++;
    }
    sum = sum/500*100;
    // logic    
    sum>=33?
    // pass
    printf("You are pass\nYour percentage is: %0.1f%%\nFail in %d subjects\n",sum,count):
    // fail
    printf("You are fail\nYOur percentage is: %0.1f%%\nFail in: %d subjects\n",sum,count);

    //12. write a program to check whether a given alphabet is in upper case or lowercase.
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);
    ch>=65&&ch<=90?printf("you enter a upper case alphabet %c",ch):printf("you enter a lower case alphabet: %c",ch);

    // 13. write a program to check whether a givenn number is divisible by 3 and divisible by 2.
    printf("Enter a number: ");
    scanf("%d",&a);
    a%3==0&&a%2==0?printf("Yes: %d is divisible by 3 and 2\n",a):printf("No %d is not divisible by 2 and 3\n",a);
    
    // 14. write a program to check whether a given number is divisible by 7 and 3.
    printf("Enter a number: ");
    scanf("%d",&a);
    a%7==0&&a%3==0?printf("Yes: %d is divisible by 7 and 3\n",a):printf("No %d is not divisible by 7 and 3\n");

    // 15. write a program to check whether a given number is positive,negative or zero
    
    printf("Enter a number: ");
    scanf("%d",&a);
    a<0?printf("%d is negative number.\n",a):
    // if user enter positive number.
    a>0?printf("%d is a positive number.\n",a):
    // if user enter 0
    printf("you enter 0\n");

    // 16. write a program to check whether a given character is an alphabet(uppercase),an lowercase or a digit or a special character/
    char character;
    printf("Enter something from keyboard: ");
    scanf("%c",&character);
    //if user enter alphabet of upper character

    character>=65&&character<=90?
    printf("you enter an alphabet: %c in uppercase\nwhich ascii code is: %d\n",character,character):
    //if user enter alphabet of lower case

    character>=97&&character<=122?
    printf("you enter an alphabet: %c in lowercase\nwhich ascii code is: %d",character,character):
    // if user enter a digit

    character>=48&&character<=57?
    printf("You enter an digit: %c\nwhich ascii code is: %d\n",character,character):

    // if you enter a special character
    character>=32&&character<=47||character>=58&&character<=64||character>=91&&character<=96||character>=123&&character<=127?
    printf("you enter a special character: %c\nwhich ascii code is: %d\n",character,character):
    printf("error");

    // 17. write a program which takes length of sides of a triangle as an input.Display whether the triangle is valid or not/

    printf("Enter two sides and base: ");
    scanf("%d %d %d",&a,&b,&c);
    a+b>c||b+c>a||c+a>b?printf("your triangle is right\n"):printf("your triangle is invalid\nRight sequance is two sides sum>remaining side.\n");

    // 18. write a program which takes the month number as an input and display number of days in that month.

    printf("Enter month number: ");
    scanf("%d",&a);
    switch(a){
        case 1: printf("You enter %d which belongs to january\nit has 31 days\n",a);
        break;

        case 2: printf("You enter %d which belongs to february\nit has 28 days\n",a);
        break;

        case 3: printf("You enter %d which belongs to March\nit has 31 days\n",a);
        break;

        case 4: printf("You enter %d which belongs to April\nit has 30 days\n",a);
        break;
        
        case 5: printf("You enter %d which belongs to May\nit has 31 days\n",a);
        break;
        
        case 6: printf("You enter %d which belongs to june\nit has 30 days\n",a);
        break;
        
        case 7: printf("You enter %d which belongs to july\nit has 31 days\n",a);
        break;

        case 8: printf("You enter %d which belongs to August\nit has 31 days\n",a);
        break;
        
        case 9: printf("You enter %d which belongs to September\nit has 30 days\n",a);
        break;

        case 10: printf("You enter %d which belongs to October\nit has 31 days\n",a);
        break;
        

        case 11: printf("You enter %d which belongs to November\nit has 30 days\n",a);
        break;

        case 12: printf("You enter %d which belongs to December\nit has 31 days\n",a);
        break;
        
        default : printf("enter number from 1 to 12 only.\n");
        break;
    }
}