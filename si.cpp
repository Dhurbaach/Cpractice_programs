#include <stdio.h>
int si(int,int,int);
main()
{
	int p,r,t;
	printf("enter p,r,t");
	scanf("%d%d%d",&p,&r,&t);
	printf("simple interest=%d",si(p,r,t));
}
int si(int p,int r,int t)
{
int s;
s=(p*r*t)/100;
return s;}
