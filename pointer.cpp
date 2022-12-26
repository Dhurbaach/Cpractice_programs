#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,sum,n;
	int (*m1)[n],(*m2)[n],m3[n][n];
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter in first matrix:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",(*(m1+i)+j));
		}
	}
	 printf("Enter in second matrix:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",*(m2+i)+j);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				sum+=*(*(m1+i)+k)**(*(m2+k)+j);
			}
			*(*(m3+i)+j)=sum;
			sum=0;
		}
	}
	printf("the resulted matrix is:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("\t%d",*(m1+i)+j);
		}
		printf("\n");
	}
	getch();
	return 0;
}
