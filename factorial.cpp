#include<stdio.h>
 int fact(int a);
 main(){int a;
printf("enter any number:");
scanf("%d",&a);
fact(a);
printf("Factorial of given number is:%d",fact(a));
 }
 int fact(int a)
 {int k=1;
 if(a<=1)
 {
 	return(1);
 }
 else
 {k=a*fact(a-1);
 }
 return(k);
 }
