#include<stdio.h>
main()
{
	int a=11111;
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		k=a*a;
		printf("%d",k);
		a=a/10;
	}
	printf("\t");
	printf("\n");
}
}
