#include<stdio.h>
#include<string.h>
main()
{
	int l;
	char a[20];
	printf("Enter any string:");
	scanf("%s",a);
	l=strlen(a);
	printf("Length of the string is:%d",l);
	printf("\nReverse of the string is:%s",strrev(a));
    
