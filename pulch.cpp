#include<stdio.h>
#include<string.h>
main()
{
	char b[10];
	int i,j,l,k;
	char a[]="kwohclup";
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(k=1;k<=l-i;k++)
		{
			printf(" ");
		}
	 	for(j=0;j<=i;j++)
	 	{
	 		printf("%c",a[j]);
		 }
		 printf("\n");
	}
}
