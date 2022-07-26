
#include<stdio.h>
int main()
{
   //1. Write a program to print unit digit of a given number.
int num;
printf("Enter a number\n");
scanf("%d",&num);
printf("\nUnit digit of %d is %d\n",num,num%10);

    //2. Write a program to print a given number without its last digit.

int number;
printf("\nEnter a number\n");
scanf("%d",&number);
printf("\n%d without its last digit is %d\n",number,number/10);

    //3. Write a program to swap values of two int variables

int a,b,c;
printf("\nEnter the value of a and b\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\nThe swap value of a is %d and b is %d\n",a,b);

    //4. Write a program to swap values of two int variables without using a third variable.

int num1,num2;
printf("\nEnter the value of num1 and num2\n");
scanf("%d%d",&num1,&num2);
num2=num1+num2-(num1=num2);
printf("The value after swapping is num1=%d and num2=%d \n",num1,num2);

    //5. Write a program to input a three-digit number and display the sum of the digits.

int digit3,s=0,r;
printf("\nEnter a three digit number\n");
scanf("%d",&digit3);

r=digit3%10;
s=s+r;
digit3=digit3/10;

r=digit3%10;
s=s+r;
digit3=digit3/10;

s=s+digit3;
printf("The sum of digit is %d\n",s);

//6. Write a program which takes a character as an input and displays its ASCII code.

char character;
printf("\nEnter a character\n");
fflush(stdin);
scanf("%c",&character);
printf("The ASCII code of %c is %d\n",character,character);

//. Write a program to find the position of first 1 in LSB.
int N,count=0,result;
printf("\nEnter a number\n");
scanf("%d",&N);
while(N)
{
    result=N&1;
    count++;
    if(result==1)
    {
        printf("The position of first LSB is %d\n",count);
        break;
    }
    N=N>>1;
}


    /*8. Write a program to check whether the given number is even or odd using a bitwise
operator.*/

int n1;
printf("\nEnter a number\n");
scanf("%d",&n1);
if(n1&1==1)
    printf("%d is odd number\n",n1);
else
    printf("%d is even number\n",n1);

/*9. Write a program to print size of an int, a float, a char and a double type variable*/

printf("\nThe size of int is %d\n",sizeof(int));
printf("The size of float is %d\n",sizeof(float));
printf("The size of char is %d\n",sizeof(char));
printf("The size of float is %d\n",sizeof(double));

/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

int number2;
printf("\nEnter a number\n");
scanf("%d",&number2);
printf("The last digit of a number stored in a variable as zero is %d\n",number2-number2%10);

/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

int number3,digit4;
printf("\nEnter a number and a digit\n");
scanf("%d%d",&number3,&digit4);
printf("\nThe concatenate value of number and digit is %d \n",number3*10+digit4);


/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

float inr;
printf("\nEnter the amount in INR\n");
scanf("%f",&inr);
printf("%.2fINR=$%.2f\n",inr,76.23/inr);

/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
int number4,r4,s4=0;
printf("\nEnter a three digit number\n");
scanf("%d",&number4);
r4=number4%10;
number4=number4/10;
s4=r4*100+s4;
r4=number4%10;
number4=number4/10;
s4=r4*10+s4;
s4=s4+number4;
printf("Digits after rotation is %d",s4);

return 0;
}
