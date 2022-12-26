#include<stdio.h>
#include<string.h>
main()
{
	char a[]="Programming";
	int l,i,j;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=0+i;j<l-i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
