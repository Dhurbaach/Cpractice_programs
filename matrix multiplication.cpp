#include<stdio.h>
main()
{
	int i,j,x,y,sum,k;
	printf("Enter the number of rows and column x & y:");
	scanf("%d%d",&x,&y);
	int a[x][y];
	int b[x][y];
	int m[x][y];
	printf("Enter the values for 1St matrix:");
for(i=1;i<=x;i++)
{for(j=1;j<=y;j++)
	{scanf("%d",&a[i][j]);
	}
}
printf("Enter the values for 2Nd matrix:");
for(i=1;i<=x;i++)
{
{for(j=1;j<=y;j++)
scanf("%d",&b[i][j]);
}
}
printf("\n\nMatrix a=\n");
for(i=1;i<=x;i++)
{
{for(j=1;j<=y;j++)
printf("%d\t",a[i][j]);
}
printf("\n\n");
}
printf("\n\nMatrix b=\n");
for(i=1;i<=x;i++)
{
{for(j=1;j<=y;j++)
printf("%d\t",b[i][j]);
}
printf("\n\n");
}
for(i=1;i<=x;i++)
{
for(j=1;j<=y;j++)
{
	for(k=1;k<=y;k++)
{
sum=sum+(a[i][k]*b[k][j]);
}
m[i][j]=sum;
sum=0;
 }
}
printf("Multiplication of matrix a and b is:\n");
for(i=1;i<=x;i++)
{
for(j=1;j<=y;j++)
{
	printf("%d\t",m[i][j]);
}
printf("\n");
}
}
