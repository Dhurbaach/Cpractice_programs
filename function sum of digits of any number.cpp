#include<stdio.h>
int sum(int n);
main()
{
int n;
printf("Enter any number:");
scanf("%d",&n);y
printf("Sum of digits of the given number is:%d",sum(n));
}
int sum(int n)
{
static int s=0;
static int r=0;
if(n>0)
{
r=n%10;
s=r+s;
sum(n/10);
}
else
return(s);
}
