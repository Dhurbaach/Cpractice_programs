#include<stdio.h>
main()
{
int i,j,x,y;
i=j=6;
printf("initial value i=%d\n",i);//i=6
x=i++;
printf("x=i++, value of x=%d and value of i=%d\n",x,i);//x=6 i=7
i=j;
y=++i;
printf("initial value i=%d\n",j);//i=6
printf("y=++i, value of y=%d and value of i=%d\n",y,i);//y=7i=7
}
