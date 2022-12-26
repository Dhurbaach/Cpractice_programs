#include<stdio.h>
int sum(int x);
main()
{
int x,s;
printf("Enter the value of x:");
scanf("%d",&x);
s=sum(x);
printf("The sum to that number is:%d",s);
}
int sum(int x)
{
 if(x>1)
{return(x+sum(x-1));
}
}
