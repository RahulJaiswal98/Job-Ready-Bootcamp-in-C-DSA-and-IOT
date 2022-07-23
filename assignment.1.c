#include <stdio.h>
int main()
{


    //1.write a program to print Hello Students in a screen.

    printf("Hello Students\n");


    // 2.Write a program to print Hello in the first line and Students in the second line.

    printf("\nHello\nStudents\n");


    //3.Write a program to print "MySirG" on the screen.(Remember to print in Double quotes)

    printf("\n\"MySirG\"\n");


    /*4.WAP to find the area of the circle. Take Radius of the circle from the user as input and print the result in the given format.
    Expected output format- "Area of circle is A having the radius R". Replace A with area and R with radius.*/

    float A;
    int R;
    printf("\nEnter the Radius of circle\n");
    scanf("%d",&R);
    A=3.1428*R;
    printf("Area of circle is %f having the radius %d\n\n",A,R);


    //5.WAP to calculate the length of string using printf function.

    int n;
    n=printf("string");
    printf("\nThe length of string is %d\n",n);


    /*6.WAP to print the name of the user in double quotes.
    Expected output format-"Hello , Amit Kumar"*/

    printf("\n\"Hello , Rahul Jaiswal\"\n");


    //7.WAP to print "%d" on the screen.

    printf("\n\"%%d\"\n");


    //8..WAP to print "\n" on the screen.

    printf("\"\\n\"\n");


    //9..WAP to print "\\" on the screen.

    printf("\"\\\\\"\n");


    /*10.WAP to take date as an input in below given format and convert the date format and
    display the result as given below.
    User input Date format- "DD/MM/YYYY" (27/11/2022)
    Output format-
    "Day-DD, Month-MM, Year-YYYY"(Day-27, Month-07, Year-2022)*/

    int D,M,Y;
    printf("\nEnter Date in DD/MM/YYYY format\n");
    scanf("%d/%d/%d",&D,&M,&Y);
    printf("Day-%d, Month-%d, Year-%d\n",D,M,Y);


    /*11.WAP to take time as an input in below given format and convert the time format and
    display the result as given below.
    User input time format- "HH:MM" (27/11/2022)
    Output format-
    "HH hour and MM minute"
    Example-
    "11:25" converted to "11 hour and 25 minute"*/

    int HH,MM;
    printf("\nEnter time in HH:MM format\n");
    scanf("%d:%d",&HH,&MM);
    printf("\n%d hour and %d minute",HH,MM);


    /*12.Find output of below code:
    int main()
        {
            int x = printf(“ineuron”);
            printf(“%d”,x);
            return 0;
        }*/
        printf("\n\noutput is ineuron7");


return 0;



}
