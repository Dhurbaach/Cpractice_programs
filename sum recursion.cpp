#include<stdio.h>
int sum(int x);
main()
{int su,x;
printf("enter any number:");
scanf("%d",&x);
printf("The sum to that number is:%d",sum(x));
}
int sum(int x)
{
if(x!=1)
{su=su+sum(x-1);
return(su);
}
}
