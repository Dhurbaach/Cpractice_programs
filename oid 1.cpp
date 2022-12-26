#include<stdio.h>
main()
{
	int k,i,j,s=11111;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		k=s*s;
		printf("%d",k);
		s=s/10;
		printf("\n");
	}
}
