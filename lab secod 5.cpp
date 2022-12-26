#include<stdio.h>
main(){
char ch;
printf("enter any value");
scanf("%c",&ch);
if((ch>= 'a') && (ch<= 'z') || (ch>= 'A') && (ch<= 'Z'))
{
printf("Entered value is alphabet.");
}
else if((ch>='0') && (ch<='9'))
{printf("Entered value is digit.");
}
else
{printf("Entered value is special character.");
}
}
