#include<stdio.h>
#include<string.h>
main()
{
	char s[20],y;
	int len;
	printf("Enter any string:");
	scanf("%s",s);
	len=strlen(s);
	printf("\nThe length of the string is:%d\n",len); 
    while(len>=0)
    {
    	printf("%c",s[len]);
    	len--;
	}
	
	
}
