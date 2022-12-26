#include<stdio.h>
#include<math.h>
main()
{
	double l,b=1;
	int a[20],i;
	printf("Enter any string:");
	scanf("%d",&a);
	l=log10(a)+1;
	printf("The reverse of the string is:");
	for (i=l-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
