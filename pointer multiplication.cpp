#include<stdio.h>
main()
{
	int m,n,q,p;
	int m1[m][n],m2[p][q],m3[m][q];
	int i,j,k,sum;
	printf("Enter row and column of first matrix:\n");
	scanf("%d%d",&m,&n);
		printf("Enter row and column of second matrix:\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("Calculation cannot be performed");
	}
	else
	{
		printf("Enter elements in first matrix");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",(*(m1+i)+j));
			}
		}
			printf("Enter elements in second matrix");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",(*(m2+i)+j));
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<q;k++)
				{
					sum+=*(*(m1+i)+k)*(*(*(m2+k)+j));
				}
				m3[i][j]=sum;
				sum=0;
			}
		}
	}
	printf("The result is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("\t%d",*(*(m3+i)+j));
			}
			printf("\n");
		}
}
