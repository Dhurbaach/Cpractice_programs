#include <stdio.h>
main(){
int a,b,c;
printf("enter any 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a<c)
{printf("middle is %d",a);
}
else if(c>b)
{printf("middle is %d",c);}
else{
printf("middle is %d",b);}
}
else {
if(a>c)
{printf("middle is %d",b);}
else if(c<b)
{printf("middle is %d",c);}
else{
printf("middle is %d",b);}
}
}

