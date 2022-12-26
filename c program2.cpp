#include <stdio.h>
main(){
float a,b,c,d,e,tot=0,per;
printf("enter marks in 5 subjects:"); 
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
tot=a+b+c+d+e;
per=(tot/500)*100;
if(per>80)
{
printf("distinction");}
else if((per<80 ) && (per>60))
{
printf("First division");}
else{
 printf("second division");}
}
