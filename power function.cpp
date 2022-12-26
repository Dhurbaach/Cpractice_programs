#include<stdio.h>
float pwr(float x,int y);
main()
{
	int y,k;
	float x;
	printf("Enter the values of x:");
	scanf("%f",&x); 
		printf("Enter the values of y:");
		scanf("%d",&y);
		k=pwr(x,y);
		printf("The value of %f^%d=%d",x,y,k);
}
float pwr(float x, int y)
{
	if(y>1)
	{y=y-1;
	return(x*pwr(x,y));
	}
}
