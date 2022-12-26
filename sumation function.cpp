#include<stdio.h>
float sum(float x);
main()
{
	float x,s;
	printf("Enter the value of x:");
	scanf("%f",&x);
	s=sum(x);
printf("The value of sum 1/%f^2 is:%f",x,s);
}
float sum(float x)
{	if(x>1)
	{return ((1/(x*x))+sum(x-1));
}}

