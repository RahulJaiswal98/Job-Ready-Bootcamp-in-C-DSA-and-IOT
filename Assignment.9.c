#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
/*1. Write a program which takes the month number as an input and display
number of days in that month.*/
int month_number;
printf("Enter month number\n");
scanf("%d",&month_number);
switch(month_number)
{
case 1: printf("The number of days in January is 31\n");
        break;
case 2: printf("The number of days in February is 28\n");
        break;
case 3: printf("The number of days in March is 31\n");
        break;
case 4: printf("The number of days in April is 30\n");
        break;
case 5: printf("The number of days in May is 31\n");
        break;
case 6: printf("The number of days in June is 30\n");
        break;
case 7: printf("The number of days in July is 31\n");
        break;
case 8: printf("The number of days in August is 31\n");
        break;
case 9: printf("The number of days in September is 30\n");
        break;
case 10: printf("The number of days in October is 31\n");
        break;
case 11: printf("The number of days in November is 30\n");
        break;
case 12: printf("The number of days in December is 31\n");
        break;
default: printf("Enter a valid Month Number\n");
}

/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
int choice,a,b;
float d1,d2;
while(1){
printf("\nChoose an operation to be performed\n");
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
scanf("%d",&choice);
switch(choice)
{
    case 1: printf("Enter any two number\n");
            scanf("%d%d",&a,&b);
            printf("The sum of %d and %d is %d\n",a,b,a+b);
            break;

    case 2: printf("Enter any two number\n");
            scanf("%d%d",&a,&b);
            printf("The Subtraction of %d and %d is %d\n",a,a-b);
            break;

    case 3: printf("Enter any two number\n");
            scanf("%d%d",&a,&b);
            printf("The multiplication of %d and %d is %d\n",a,b,a*b);
            break;

    case 4: printf("Enter any two number\n");
            scanf("%f%f",&d1,&d2);
            printf("The Division of %.2f and %.2f is %.2f\n",d1,d2,d1/d2);
            break;

    case 5: break;
    default: printf("Enter a valid choice\n");
}
if(choice==5)
    break;
}

/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/
int week_day;
printf("\nEnter the day number of the week\n");
scanf("%d",&week_day);
switch(week_day)
{
    case 1: printf("Trust- It makes things viable, not straightforward. \nFaith- It makes things clear, not obvious. Be confident and courageous! And never be afraid of making decisions.\n Have a lovely Sunday!\n");
            break;
    case 2:printf("Monday might be terrible,\n but God still has something good for you in it.\n Have a great Monday\n");
            break;
    case 3:printf("May the Tuesday be as filling and rewarding for you\n like the best day of your life till date.\n Happy Tuesday!\n");
            break;
    case 4:printf("I hope your day is packed with pleasant vibes \nso you may be joyful all day and go about your work with full energy.\n Have a lovely Wednesday!\n");
            break;
    case 5:printf("As it is Thursday again,\n make your way to greet the workload and start preparing for the weekend. \nHope you have a good day.\n");
            break;
    case 6:printf("It feels good to be alive to see one more Friday in life. \nI know you love the day just as much as I do\n. Happy Friday!\n Have a great time!\n");
            break;
    case 7:printf("Even when life gets hard, just remember that after the tiring week,\n Saturday comes as a blessing along with Sunday \nso that you can have the time of your life. \nHappy Saturday\n");
            break;
    default: printf("Enter a valid day number\n");

}

/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
int l,bd,h;
printf("\nEnter the length,breadth and height of a triangle\n");
scanf("%d%d%d",&l,&bd,&h);
switch(l==bd&&bd==h&&l==h)
{
    case 1: printf("It is an equilateral triangle\n");
            break;
    case 0: switch(l==bd||bd==h||l==h)
    {
        case 1: printf("It is an isosceles triangle\n");
            break;
        case 0: switch(h*h==l*l+bd*bd)
        {
            case 1:printf("It is an right angled triangle\n");
                    break;
            case 0:
                printf("It is an scalene triangle\n");
        }

    }
}

/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/

int var;
printf("\nEnter a number\n");
scanf("%d",&var);
switch(var==1)
{
    case 1: printf("good\n");
            break;
    case 0: switch(var==2)
    {
        case 1: printf("better\n");
            break;
        case 0:switch(var==3)
        {
            case 1: printf("best\n");
                break;
            case 0: default : printf("invalid\n");
        }
            }
}

/*6. Program to check whether a year is a leap year or not. Using switch
statement*/
int year;
printf("\nEnter the Year\n");
scanf("%d",&year);
switch(year%4==0)
{
    case 1: printf("%d is a leap year\n",year);
            break;
    case 0: switch(year%100==0)
    {
        case 1: switch(year%400==0)
                {
                    case 1: printf("%d is a leap year\n",year);
                    break;
                    case 0: printf("%d is not a leap year\n",year);
                    break;
                }
       case 0: printf("%d is not a leap year\n",year);
                break;
    }
}

/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

float unit,charge;
printf("\nEnter the unit charge\n");
scanf("%f",&unit);
switch(unit<=50)
{
    case 1: printf("The electricity bill is %.2f\n",charge=unit*0.50);
            break;
    case 0: switch(unit<=150)
        {
            case 1: printf("The electricity bill is %.2f\n",charge=25+(unit-50)*0.75);
                break;
            case 0: switch(unit<=250)
            {
                case 1: printf("The electricity bill is %.2f\n",charge=100+(unit-150)*1.20);
                    break;
                case 0: printf("The electricity bill is %.2f\n",charge=220+(unit-250)*1.50);
                        break;


                }
            }
        }
printf("The total charge after including 20 percent charge is %.2f\n",charge+0.2*charge);

/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

int number;
printf("\nEnter an number\n");
scanf("%d",&number);
switch(number>0)
{
    case 1: printf("%d in negative is %d\n",number,number-number-number);
            break;
    case 0: printf("%d in positive is %d\n",number,number-number-number);
            break;
    default : printf("Enter a number\n");
}

/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.*/
int num;
printf("\nEnter a number\n");
scanf("%d",&num);
switch(num%2==0)
{
    case 1: printf("The upper nearest number is %d",++num);
    break;
   case 0:  printf("Enter an even number\n");
}

//10.C program to find all roots of a quadratic equation using switch case.

int a1,b1,c,d;
float x,y,rp,ip;
printf("\nEnter the value of coefficient of x^2,x,and constant\n");
scanf("%d%d%d",&a1,&b1,&c);
d=b1*b1-4*a*c;
switch(d==0)
{
    case 1: printf("Roots are equal\n");
            x=-b1/(2.0*a1);
            printf("Root is: %.2f",x);
    case 0: switch(d>0)
            {
                case 1: printf("Roots are real and distinct\n");
                        x=(-b1-sqrt(d))/(2*a1);
                        y=(-b1+sqrt(d))/(2*a1);
                        printf("Roots are: %f and %f",x,y);
                        break;
                case 0: printf("Roots are imaginary\n");
                        rp=-b1/(2.0*a1);
                        ip=sqrt(4*a1*c-b1*b1);
                        printf(" Imagianry roots are:\n %.2f+%.2fi and %.2f-%.2fi",rp,ip,rp,ip);
                        break;

            }
}


return 0;
}
