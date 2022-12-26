#include<stdio.h>
void ins(int x,int y);
main()
{
	int x;
	int y;
	printf("Enter position:");
	scanf("%d",&x);
	printf("Enter array element:");
	scanf("%d",&y);
	ins(x,y);
}
void ins(int x,int y)
{
	int i,n;
int b[100];
printf("Enter number of element in array:\n");
scanf("%d",&n);
printf("Enter %d elements in array:\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
for(i=n-1;i>=x-1;i--)
{
	b[i+1]=b[i];
}	
		b[x-1]=y;
		printf("The resultant array is:");
		for(i=0;i<=n;i++)
		{
			printf("%d",b[i]);
		}
}
