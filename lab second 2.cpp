#include<stdio.h>
main()
{
int a,b,c,d,e,tot,per;
printf("enter marks in 5 subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
tot=a+b+c+d+e;
if((a>40)&& (b>40) && (c>40) && (d>40) && (e>40))
{printf("You are pass.\n");
}
else
{printf("You are failed\n");
}
per=tot/5;
printf("total marks is=%d\n",tot);
printf("Percentage is=%d\n",per);
if(per<40)
{
printf("Division=fail");}
else if((per>40) && (per<50))
{printf("Division=third");}
else if((per>50) && (per<60))
{
printf("Division=second");}
else if((per>60) && (per<80))
{
printf("Division=first");}
else 
{
printf("Division=distinction");}
}
