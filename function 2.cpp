#include<stdio.h>
void fib(int n);
main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	fib(n);
}
void fib(int n)
{
	int a=1,b=1,c,i;
	printf("%d\n%d\n",a,b);
	for(i=1;i<n-1;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
