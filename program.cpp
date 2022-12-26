#include<stdio.h>
#include<string.h>
main()
{
	char a[]="Programming";
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=i;j<strlen(a)-i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
