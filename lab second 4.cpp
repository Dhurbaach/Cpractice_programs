#include<stdio.h>
main(){
int f,x,y,n;
printf("enter two numbers");
scanf("%d%d",&x,&y);
printf("enter value of n");
scanf("%d",&n);
if(n>0)
{
f=x+y;
printf("value of function=%d",f);}
else
{f=x-y;
printf("value of function=%d",f);}
}

