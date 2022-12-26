#include<stdio.h>
int mult(int n);
main()
{
int n,value;
printf("Enter any number:");
scanf("%d",&n);
value=mult(n);
printf("Multiplication of digits of the given number is:%d",value);
}
int mult(int k)
{
int rem,res=1;
if(k>0)
{
rem=k%10;
res*=rem;
mult(k/10);
}
return(res);
}
