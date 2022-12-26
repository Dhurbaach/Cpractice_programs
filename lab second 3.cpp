#include<stdio.h>
 main()
{
float a,b,unt;
float rat=80;
char nam[20],ad[20];
printf("enter name");
scanf("%s",&nam);
printf("enter address");
scanf("%s",&ad);
printf("enter initial unit and final unit");
scanf("%f%f",&a,&b);
printf("Name=%s\n",&nam);
printf("Address=%s\n",&ad);
unt=b-a;
if(unt<=20)
{
printf("Rate is Rs:%f",rat);}
else if((unt>20) && (unt<50))
{rat=rat+((unt-20)*6.5); 
printf("Rate is Rs:%f",rat);
}
else
{rat=rat+((unt-20)*6.5)+((unt-50)*8);
printf("Rate is Rs:%f",rat);
}
}
