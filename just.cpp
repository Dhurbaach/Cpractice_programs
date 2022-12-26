#include<stdio.h>
main()
{
	int x=1,sum=0,i,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+x;
		x=(x*10)+1;
	}
	printf("The sum of the series is:%d",sum);
}
