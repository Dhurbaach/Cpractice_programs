#include<stdio.h>
main()
{
	char x[100];
	int l;
	printf("Enter any character:\n");
	scanf("%s",x);
	for(int i=0;x[i]!='\0';i++)
	{
		l++;
	}
	printf("Length=%d",l);
}
