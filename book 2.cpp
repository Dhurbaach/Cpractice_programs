#include<stdio.h>
main(){
int n=1;
while(n<10)
{
if(n==3)
{printf("understand continue\n");
n=n+1;
continue;
}
printf("Number=%d\n",n);
n=n+1;
}}
