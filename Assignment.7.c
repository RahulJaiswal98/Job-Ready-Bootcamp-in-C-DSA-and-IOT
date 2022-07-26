#include<stdio.h>
#include<math.h>
int main()
{
//1. Write a program to find the Nth term of the Fibonnaci series.
int a=-1,b=1,c,i,n;
printf("Enter the n^th term\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
}
    printf("The %d^th term of the Fibonacci series is %d\n",n,c);

//2. Write a program to print first N terms of Fibonacci series
int a1=-1,b1=1,c1,n1,i1;
printf("\nEnter the N terms\n");
scanf("%d",&n1);
printf("The first %d terms of the fibonacci series are:\n",n);
for(i1=1;i1<=n1;i1++)
{
    c1=a1+b1;
    a1=b1;
    b1=c1;
    printf("%d\n",c1);

}
/*3. Write a program to check whether a given number is there in the Fibonacci
series or not.*/
int a2=-1,b2=1,c2,n2,i2,f;
printf("\nEnter a number\n");
scanf("%d",&n2);
for(i2=1;1;i2++)
{
    c2=a2+b2;
    a2=b2;
    b2=c2;
    if(c2==n2)
    {
        f=1;
        break;
    }
    if(c2>n2)
        break;

}
if(f==1)
    printf("%d is in fabonacci series\n",n2,i2);
else
    printf("%d is not in fabonacci series\n",n2);

//4. Write a program to calculate HCF of two numbers
int a3,b3,min;
printf("\nEnter any two number\n");
scanf("%d%d",&a3,&b3);
min=a3<b3?a3:b3;
for(min;min>=1;min--)
{
    if(a3%min==0&&b3%min==0)
        break;
}
printf("HCF of %d and %d is %d\n",a3,b3,min);

/*5. Write a program to check whether two given numbers are co-prime
numbers or not*/
int a4,b4,min3;
printf("\nEnter any two number\n");
scanf("%d%d",&a4,&b4);
min3=a4<b4?a4:b4;
for(min3;min3>=1;min3--)
{
    if(a3%min3==0&&b3%min3==0)
        break;
}
if(min3==1)
    printf("%d and %d are co-prime number\n",a4,b4);
else
    printf("%d and %d are not co-prime number\n",a4,b4);

//6. Write a program to print all Prime numbers under 100
int i3,j3,f1=0;
printf("\nPrime number under 100 are:\n");
for(i3=2;i3<=100;i3++)
{
    f1=0;
    for(j3=2;j3<i3;j3++)
    {
        if(i3%j3==0)
        {
            f1=1;
            break;
        }
    }
    if(f1==1);
    else
        printf("%d\n",i3);
}

//7. Write a program to print all Prime numbers between two given numbers
int n0,n01,f0=0,j4;
printf("\nEnter any two number\n");
scanf("%d%d",&n0,&n01);
printf("Prime number between %d and %d :\n",n0,n01);
for(n0;n0<n01;n0++)
{
    f0=0;
    for(j4=2;j4<n0;j4++)
    {
        if(n0%j4==0)
        {
            f0=1;
            break;
        }
    }
    if(f0==1);
    else
        printf("%d\n",n0);
}

//8. Write a program to find next Prime number of a given number
int number,g=0,j,x;
printf("Enter any number\n");
scanf("%d",&number);
x=number+1;
printf("The next prime number is:\n");
for(x;1;x++)
{
    g=0;
    for(j=2;j<x;j++)
    {
        if(x%j==0)
        {
            g=1;
            break;
        }
    }
    if(g==0){
        printf("The next prime number is %d\n",x);
        break;
    }
}
/*9. Write a program to check whether a given number is an Armstrong number
or not*/


int num,count=0,s=0,r,p,y;
printf("\nEnter a number\n");
scanf("%d",&num);
p=num;
while(p)
{
    p=p/10;
    count++;
}
y=num;
while(y)
{
    r=y%10;
    s=s+pow(r,count);
    y=y/10;
}
if(num==s)
    printf("%d is an Armstrog number\n",num);
else
    printf("%d is not an Armstrong number\n",num);

//10. Write a program to print all Armstrong numbers under 1000
int count1,s1=0,r1,p1,y1,k;
printf("Armstrog number under 1000 are:\n");
for(k=1;k<=1000;k++)
    {   count1=0;
        p1=k;
        s1=0;
    while(p1)
{
    p1=p1/10;
    count1++;
}
y1=k;
    while(y1)
{
    r1=y1%10;
    s1=s1+pow(r1,count1);
    y1=y1/10;
}
if(k==s1)
    printf("%d\n",k);

    }
return 0;
}
