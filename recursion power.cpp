#include<stdio.h>
float pwr(float x, int y);
main()
{
	int y;
	float x,s,sum=1;
	printf("enter value of x:");
scanf("%f",&x);
printf("enter value of y:");
scanf("&d",&y);
s= pwr(x,y);
printf("The value of %f^%d is:",s);
}
float pwr(float x,int y)
{
float sum=1;
	if (y>1)
	{sum=sum*pwr(x,y-1);
	}
	return sum;
}
