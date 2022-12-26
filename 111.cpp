#include<stdio.h>
int ser(int n);
main()
{
	int n,s;
	printf("Enter the value of n:");
    scanf("%d",&n);
    s=ser(n);
    printf("The value of sum of series is:%d",s);
}
int ser(int n)
{
	static int a=1;
	static int sum=0;
	if(n>0)
	{
		sum=sum+a;
		a=a*10+1;
		ser(n-1);
	}
	else
	return(sum);
}

