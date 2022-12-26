#include<stdio.h>
main(){
int a,n;
printf("select month");
scanf("%d",&a);
switch(a)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
{n=31;
printf("Days=%d",n);
}
break;
case 2:
{n=28;
printf("Days=%d",n);
}
break;
case 4:
case 6:
case 9:
case 11:
	{n=30;
	printf("Days=%d",n);
	}
break;
default:
printf("invalid");
}}
