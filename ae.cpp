#include<stdio.h>
int fact(int x);
main()
{int x,s;
printf("Enter any number:");
scanf("%d",&x);
s=fact(x);
printf("The factorial of given number is:%d",s);
}
int fact(int x)
{if(x<=1)
{return(1);
}
else
{return(x*fact(x-1));
}
}
