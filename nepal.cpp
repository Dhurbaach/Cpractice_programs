#include<stdio.h>
#include<string.h>
main()
{
	char a[]=" NePaL";
	int i,j,k;
		for(i=5;i>=0;i--)
		{
			for(k=5-i;k>=0;k--)
	{
		printf(" ");
	}
			for(j=2*i-1;j>=1;j--)
			{
				printf("%c",a[i]);
		}
			printf("\n");
	}
}
