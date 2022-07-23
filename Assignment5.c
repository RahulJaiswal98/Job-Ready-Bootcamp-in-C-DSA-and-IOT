#include<stdio.h>
int main()
{
//1. Write a program to print MySirG N times on the screen
int n1;
printf("Enter a number\n");
scanf("%d",&n1);
for(int i=1;i<=n1;i++)
printf("MySirG\n");
printf("\n");

//2. Write a program to print the first N natural numbers.
int n2;
printf("Enter a number\n");
scanf("%d",&n1);
for(int j=1;j<=n1;j++)
printf("%d\n",j);
printf("\n");

//3. Write a program to print the first N natural numbers in reverse order
int n3;
printf("Enter a number\n");
scanf("%d",&n3);
for(int k=1;k<=n3;n3--)
printf("%d\n",n3);
printf("\n");

//4. Write a program to print the first N odd natural numbers

int n4;
printf("Enter a number\n");
scanf("%d",&n4);
for(int o=1;o<=n4*2;o++)
    if(o&1)
printf("%d\n",o);
printf("\n");

//. Write a program to print the first N odd natural numbers in reverse order.

int n5;
printf("Enter a number\n");
scanf("%d",&n5);
n5=n5*2;
for(int ro=1;ro<=n5;n5--)
    if(!(n5%2==0))
printf("%d\n",n5);
printf("\n");


//. Write a program to print the first N even natural numbers

int n6;
printf("Enter a number\n");
scanf("%d",&n6);
for(int e=1;e<=n6*2;e++)
    if(!(e&1))
printf("%d\n",e);
printf("\n");


//7. Write a program to print the first N even natural numbers in reverse order
int n7;
printf("Enter a number\n");
scanf("%d",&n7);
n7=n7*2;
for(int re=1;re<=n7;n7--)
    if(!(n7&1))
printf("%d\n",n7);
printf("\n");

//8. Write a program to print squares of the first N natural numbers

int n8;
printf("Enter a number\n");
scanf("%d",&n8);
for(int sq=1;sq<=n8;sq++)
printf("%d\n",sq*sq);
printf("\n");

//9. Write a program to print cubes of the first N natural numbers
int n9;
printf("Enter a number\n");
scanf("%d",&n9);
for(int cb=1;cb<=n9;cb++)
printf("%d\n",cb*cb*cb);
printf("\n");

//10. Write a program to print a table of N.
int n10;
printf("Enter a number\n");
scanf("%d",&n10);
for(int t=1;t<=n10;t++)
printf("%d*%d=%d\n",n10,t,t*n10);
printf("\n");

return 0;
}
