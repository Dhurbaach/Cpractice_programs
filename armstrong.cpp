#include<stdio.h>
int check(int n);
main()
{
	int x,y,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	y=n;
	x=check(n);
	if(x==y)
	{
		printf("The number is armstrong.\n");
	}
	else
	{
		printf("The number is not armstrong.");
	}
}
int check(int n)
{
	int r;
	static int sum=0;
if(n>0)
	{
	r=n%10;
	sum=sum+(r*r*r);
	check(n/10);
	}
	else
	return(sum);
}
