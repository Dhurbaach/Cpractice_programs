#include<stdio.h>
main()
{ 
	int c,i,j,l,k;
	for(i=5;i>=1;i--)
	{
		for(j=i-1;j>=1;j--)
		{
			printf(" ");
		}
		
		for(k=5;k>=i;k--)
		{
			printf("%d",k);
		}
		for(l=i+1;l<=5;l++)
		{
			printf("%d",l);
			c++;
		}
		printf("\n");
	}
}
