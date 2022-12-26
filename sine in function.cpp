#include<stdio.h>
float sin(float x,float n);
main()
{
	float a,x,n;
	printf("Enter values of x and n:");
	scanf("%f%f",&x,&n);
	x=x*3.141/180;
	a=sin(x,n);
	printf("The sum of series is sin(%f)=%f",x,a);
}
float sin(float x,float n)
{static float sum=x;
static float t=x;
static int i=1;
	if(n>0)
	{
		t=t*(-1)*x*x/(2*i*(2*i+1));
		sum=sum+t;
		i++;
		sin(x,n-1);
	}
	else
	return(sum);
}

