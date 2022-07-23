#include<stdio.h>
int main()
{
//1. Write a program to calculate sum of first N natural numbers
int i,n,s=0;
printf("Enter a natural number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
s=s+i;
printf("The sum of first %d natural number is %d\n",n,s);

//2. Write a program to calculate sum of first N even natural numbers
int i1,n1,s1=0;
printf("\nEnter a natural number\n");
scanf("%d",&n1);
for(i1=1;i1<=n1*2;i1++)
if(!(i1&1))
s1=s1+i1;
printf("The sum of first %d even natural number is %d\n",n1,s1);

//3. Write a program to calculate sum of first N odd natural numbers
int i2,n2,s2=0;
printf("\nEnter a natural number\n");
scanf("%d",&n2);
for(i2=1;i2<=n2*2;i2++)
if(i2&1)
s2=s2+i2;
printf("The sum of first %d odd natural number is %d\n",n2,s2);

//4. Write a program to calculate sum of squares of first N natural numbers
int i3,n3,s3=0;
printf("\nEnter a natural number\n");
scanf("%d",&n3);
for(i3=1;i3<=n3;i3++)
s3=s3+i3*i3;
printf("The sum of squares of first %d natural number is %d\n",n3,s3);

//5. Write a program to calculate sum of cubes of first N natural numbers
int i4,n4,s4=0;
printf("\nEnter a natural number\n");
scanf("%d",&n4);
for(i4=1;i4<=n4;i4++)
s4=s4+i4*i4*i4;
printf("The sum of cubes of first %d natural number is %d\n",n4,s4);

//6. Write a program to calculate factorial of a number
int i5,n5,f=1;
printf("\nEnter a number\n");
scanf("%d",&n5);
for(i5=1;i5<=n5;i5++)
    {
        if(n5>0)
    f=f*i5;
    else
        {
            printf("The factorial of 0 is 1\n");
            break;
        }
    }
    printf("The factorial of %d is %d\n",n5,f);

//7. Write a program to count digits in a given number
int n6,count=0,i6;
printf("\nEnter a number\n");
scanf("%d",&n6);
for(count;n6;count++)
    n6=n6/10;
printf("The digits in the given number is %d\n",count);

/*8. Write a program to check whether a given number is a Prime number or
not*/
int n7,i7,flag;
printf("\nEnter a number\n");
scanf("%d",&n7);
for(i7=2;i7<=n7/2;i7++)

    if(n7%i7==0)
        flag=1;

   if(flag=1)
    printf("%d is not a prime number\n",n7);
   else
   printf("%d is a prime number\n",n7);


//9. Write a program to calculate LCM of two numbers

int a,b,max;
printf("\nEnter any two numbers\n");
scanf("%d%d",&a,&b);
max=a>b?a:b;
for(max;max<=a*b;max=max+(a>b?a:b))
if(max%a==0&&max%b==0)
break;
printf("The LCM of %d and %d is %d\n",a,b,max);

//10. Write a program to reverse a given number
int number,rv=0,r;
printf("\nEnter number\n");
scanf("%d",&number);
while(number)
{
    r=number%10;
    number=number/10;
    rv=rv*10+r;
}
printf("The reverse of a given number is %d",rv);
return 0;
}
