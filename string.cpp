#include <stdio.h>
main()
{
	char a[6]="HELLO";
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
		printf("%c",a[j]);
	}
	printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
		printf("%c",a[j]);
	}
	printf("\n");
	}
}
