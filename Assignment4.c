#include <stdio.h>
int main()
{

//1. Write a program to print MySirG 5 times on the screen.
int i;
for(i=1;i<=5;i++)
printf("MySirG\n");
printf("\n");

//2. Write a program to print the first 10 natural numbers.
int j;
for(j=1;j<=10;j++)
printf("%d\n",j);
printf("\n");

//3. Write a program to print the first 10 natural numbers in reverse order
int k=10;
while(k>=1){
printf("%d\n",k);
k--;
}
printf("\n");
//4. Write a program to print the first 10 odd natural numbers
int odd;
for(odd=1;odd<=19;odd++)
if(!(odd%2==0))
printf("%d\n",odd);
printf("\n");

//5. Write a program to print the first 10 odd natural numbers in reverse order.
int rev_odd;
for(rev_odd=19;rev_odd>=1;rev_odd--)
if(rev_odd&1==1)
printf("%d\n",rev_odd);
printf("\n");

//6. Write a program to print the first 10 even natural numbers
int even=1;
do
{
if(even%2==0)
printf("%d\n",even);
even++;
}while(even<=20);
printf("\n");

//7. Write a program to print the first 10 even natural numbers in reverse order
int rev_even;
for(rev_even=20;rev_even>=1;rev_even--)
if(!(rev_even&1))
printf("%d\n",rev_even);
printf("\n");

//8. Write a program to print squares of the first 10 natural numbers
int sq;
for(sq=1;sq<=10;sq++)
printf("%d square=%d\n",sq,sq*sq);
printf("\n");

//9. Write a program to print cubes of the first 10 natural numbers
int cb;
for(cb=1;cb<=10;cb++)
printf("%d cube =%d\n",cb,cb*cb*cb);
printf("\n");

//10. Write a program to print a table of 5.
int table;
for(table=1;table<=10;table++)
printf("5*%d=%d\n",table,table*5);
return 0;
}
