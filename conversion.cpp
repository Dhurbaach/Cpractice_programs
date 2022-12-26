#include<stdio.h>
main()
{
	int n,ch;
	printf("Enter a decimal number:\n");
	scanf("%d",&n);
	printf("Enter 1 to decimal-binary,2 to decimal-octal,3 to decimal-hexadecimal:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
			int r,a,p=1;
				while(n!=0)
				{
					r=n%2;
					a=a+(r*p);
					n=n/2;
					p=p*10;
				}
				printf("The binary conversion is:%d\n",a);
				break;
			}
		case 2:
			{
				printf("The octal conversion is:%o\n",n);
				break;
			}
		case 3:
			{
				printf("The hexadecimal conversion is%x\n",n);
				break;
			}
			default:
				printf("Invalid choice!!");
	}
}
