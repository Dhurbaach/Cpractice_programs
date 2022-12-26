#include<stdio.h>
float pwr(float x,int y);
main()
{
	int y;
	float x,s;
printf("enter value of x:");
scanf("%f",&x);
printf("enter value of y:");
scanf("%d",&y);
s= pwr(x,y);
printf("The value of %f^%d is:%f",x,y,s);
}
float pwr(float x,int y)
{
	if (y!=1)
	{return(x*pwr(x,y-1));
	}
	 
}
