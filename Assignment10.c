#include<stdio.h>
#include<math.h>
float area(float);
float simple_interest(float,float,float);
int check_even_odd(int);
void natural_number(int);
void odd_natural_number(int);
int factorial(int);
float combination(int,int);
float arrangement(int,int);
int check_digit(int,int);
void prime_factor(int);

int main()
{
//1. Write a function to calculate the area of a circle. (TSRS)
float radius,a;
printf("Enter the radius of a circle\n");
scanf("%f",&radius);
a=area(radius);
printf("\nArea of circle of radius %.2f is %.2f\n",radius,a);

float principal,rate,time;
printf("\nEnter principal,rate and time in year respectively\n");
scanf("%f%f%f",&principal,&time,&rate);
printf("The Simple interest in the given principle,time, and rate is %.2f\n",simple_interest(principal,time,rate));


int number,check;
printf("\nEnter a number\n");
scanf("%d",&number);
check=check_even_odd(number);
if(check==1)
    printf("%d is an even number\n",number);
else
    printf("%d is an odd number\n",number);


int num;
printf("\nEnter a number to which you want to print the natural number\n");
scanf("%d",&num);
natural_number(num);

int odd;
printf("\nEnter a number to which you want to print the first odd natatural number\n");
scanf("%d",&odd);
odd_natural_number(odd);

int n;
printf("\nEnter a number\n");
scanf("%d",&n);
printf("The factorial of %d is %d\n",n,factorial(n));

int n_times,r_selected;
printf("\nEnter the value of \'n\' and \'r\' \n");
scanf("%d%d",&n_times,&r_selected);
printf("The number of combination is %.2f\n",combination(n_times,r_selected));

int n1_times,r1_selected;
printf("\nEnter the value of \'n\' and \'r\' \n");
scanf("%d%d",&n1_times,&r1_selected);
printf("The number of arrangement is %.2f\n",arrangement(n1_times,r1_selected));


int no,digit,c;
printf("\nEnter number and a digit to check wheather a number contain digit or not\n");
scanf("%d%d",&no,&digit);
c=check_digit(no,digit);
if(c==1)
    printf("Yes %d contain %d\n",no,digit);
    else
    printf("No %d doesn't contain %d\n",no,digit);

int numb;
printf("\nEnter a number to find prime factor\n");
scanf("%d",&numb);
prime_factor(numb);

return 0;
}



float area(float radius)
{
    int a;
    a=3.1428*pow(radius,2);
    return(a);
}
//2. Write a function to calculate simple interest. (TSRS)
float simple_interest(float p,float t,float r)
{
    return (p*t*r/100);
}

/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
int check_even_odd(int n)
{
    return(n&1?0:1);
}

//4. Write a function to print first N natural numbers (TSRN)
void natural_number(num)
{
    printf("The first %d natural number:\n",num);
    for(int i=1;i<=num;i++)
        printf("%d\n",i);
}

//5. Write a function to print first N odd natural numbers. (TSRN)
void odd_natural_number(int odd)
{
    printf("The first %d odd natural number:\n",odd);
    for(int j=1;j<=odd*2;j++)
        if(j&1)
        printf("%d\n",j);
}

//6. Write a function to calculate the factorial of a number. (TSRS)
int factorial(int n)
{
    int f=1;
    for(int l=1;l<=n;l++)
        f=f*l;
    return f;

}

/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
float combination(int n,int r)
{
    int f_n=1,f_r=1,f_nr=1;
    float c;
    for(int i=1;i<=n;i++)
        f_n=f_n*i;
    for(int j=1;j<=r;j++)
        f_r=f_r*j;
    for(int k=1;k<=(n-r);k++)
        f_nr=f_nr*k;
    c=f_n/(f_r*f_nr*1.0);
    return c;

}

/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/
float arrangement(int n,int r)
{
    int f_n=1,f_r=1;
    float a;
    for(int i=1;i<=n;i++)
    f_n=f_n*i;

    for(int j=1;j<=f_r;j++)
        f_r=f_r*j;

    a=f_n/(f_r*1.0);
    return a;
}


/*9. Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
int check_digit(int n,int d)
{
    int r;
    while(n)
    {
        r=n%10;
        n=n/10;
        if(r==d)
            break;
    }
    if(r==d)
        return 1;
    else
        return 0;
}

/*10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
void prime_factor(int n)
{
    int d;
    d=n;
    for(int i=2;i<=n/2;i++)
    {
        if(d%i==0)
        {
            printf("%d,",i);
            d=d/i;
            i=1;
        }
        if(d==1)
            break;
    }
}
