#include<stdio.h>
main(){
int n=1;
while(n<10)
{
if(n==3)
{
printf("i understand the use of break\n");
break;
}
printf("number=%d\n",n);
n=n+1;
}
}
