#include<stdio.h>
main()
{
int p,r,t,si;
printf("Enter principal, rate and time in years:");
scanf("%d%d%d",&p,&r,&t);
si=(p*t*r)/100;
printf("simple interest is:%d",si);
}
