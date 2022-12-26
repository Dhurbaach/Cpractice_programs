#include<stdio.h>
main()
{
	int x,y,sum,n,i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=(i*(i+1))/2;
	    y=10*i;
	    sum=sum+(x*y);
	}
	printf("the sum of the series is:%d",sum);
}
