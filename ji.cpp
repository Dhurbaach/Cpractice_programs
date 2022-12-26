#include<stdio.h>
int ser(int a);
 main()
{
	int n,k;
	printf("Enter the value of n:");
	scanf("%d",&n);
	k=ser(n);
	printf("The sum of the series is:%d",k);
}
int ser(int n)
{int sum=1;
	if(n>1)
	{
		sum=n*ser(n-1);
	}
	return(sum);
}
