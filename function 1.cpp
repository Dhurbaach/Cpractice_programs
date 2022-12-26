#include <stdio.h>
void dis ();
int main()
{	
dis();
	return 0;
}
 void dis()
{int a,b;
	printf("enter values of a and b");
	scanf("%d%d",&a,&b);
	if(a>b)
	{printf("%d is greatest",a);
	}
	else
	{printf("%d is greatest",b);
	}
}
