#include<stdio.h>
main()
{char x;
char y[30];
	printf("\nEnter any string:");
	gets(y);
		printf("Enter any character:");
		scanf("%c",&x);
	printf("\nThe entered charcter is:%c",x);
	printf("\nThe entered string is:");
	puts(y);
}
