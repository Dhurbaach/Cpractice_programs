#include<stdio.h>
main()
{
	int i,n;
	float sum=1,t=1,x;
	printf("Enter the value of x&n:\n");
	scanf("%f%d",&x,&n);
	x=x*3.141/180;
	for(i=1;i<=n;i++)
	{
		t=(t*(-1)*x*x)/(2*i*(2*i-1));
		sum=sum+t;
	}
	printf("the value of cos(%f) is:%f",x,sum);
}
