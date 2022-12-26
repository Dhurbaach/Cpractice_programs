#include<stdio.h>
main()
{
int num=4567;
printf("justify to right\n");
printf("%7d\n",num);
printf("justify to left\n");
printf("%-7d\n",num);
printf("cut it to three places\n");
printf("%3d\n",num);
printf("Zero fill to 7 place\n");
printf("%07d",num);}
