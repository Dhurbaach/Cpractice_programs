#include<stdio.h>
void product(int c[][2],int a[][2],int b[][2]);
main()
{   int m,n;
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	printf("\nEnter values in first matrix\n");
	for (i=0;i<2;i++)
	{for (j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
    }
    printf("\nEnter the values in second matrix\n");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
{
	scanf("%d",&b[i][j]);
}
}
	product(a,b,c);
		printf("the multiplication of matrix are:\n");
			for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
}
	void product(int a[][2],int b[][2],int c[][2])
	{
		int i,j,k,sum;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
			sum+=a[i][k]*b[k][j];
		}
			c[i][j]=sum;
			sum=0;
		}
	}
}
