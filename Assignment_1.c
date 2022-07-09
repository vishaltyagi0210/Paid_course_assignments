#include<stdio.h>
#include<conio.h>

int main(){
    // 1. write a program to print Hello students on the screen.

    printf("hello\n");

    //2. write a program to print hello in the first line and students in the second line.

    printf("Hello\nStudents\n");

    //3. write a program to print "MySirG" on the screen

    printf("\"MySirG\"\n");

    //4. WAP to find the area of the circle.Take radius of circle from user as input and print the result in below given format.

    // Expected output format: "Area of circle is A having the radius R".Replace A with area & R with radius.
    float A;
    int R;
    printf("Enter radius of circle: ");
    scanf("%d",&R);
    printf("Area of a circle is %0.2f having radius %d\n",3.14*R*R,R);

    // 5. write a program to calculate the length of string using printf function.
    
    printf("\nlength of your string is: %d\n",printf("Hello"));

    // 6. write a program to print the name of the user in double quote.

    printf("\"Hello,Vishal Tyagi\"\n");

    // 7. write a program to print "%d" on the screen.

    printf("%%d\n");

    // 8. write a program to print "\n"on the screen.

    printf("\\n\n");

    // 9. write a program to print "\\" on the screen.

    printf("\\\\\n");

    // 10. write a program to take data as an input in below given format and convert the data format and display the result as given below.

    /* user input data format: "DD/MM/YYYY"(09/07/2022)
       output format: "Day-DD, Month- MM, Year- YYYY"(Day- 9, Month - 7, Year- 2022).
    */
    int D,M,Y;
    printf("Enter date: ");
    scanf("%d/%d/%d",&D,&M,&Y);
    printf("Day - %d, Month - %d, Year - %d\n",D,M,Y);

    // 11. write a program to take time as an input in gven below format and convert the time format and display the result as given below.

    //  user input data format - "HH:MM"
    //  output format - "HH hours and MM minutes"
    int h,m;
    printf("Enter time: ");
    scanf("%d:%d",&h,&m);
    printf("%d Hours and %d Minutes\n",h,m);

    // 12. find output
    int x = printf("ineuron");
    printf("%d\n",x);
    getch();
    return 0;
    
}