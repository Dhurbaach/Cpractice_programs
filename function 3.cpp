#include<stdio.h>
#include<math.h>
void area();
main()
{
area();
}
void area()
{
int a,b,c,s; float are;
printf("enter 3 sides of a triangle:");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
are=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle =%f",are);
}
