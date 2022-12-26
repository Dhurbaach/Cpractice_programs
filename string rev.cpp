#include<stdio.h>
#include<string.h>
main()
{
	char s[20];
	int len,i;
	printf("Enter any string:");
	scanf("%s",s);
	len=strlen(s);
	printf("The length of the string is:");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	
}
