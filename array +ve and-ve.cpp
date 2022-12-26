#include<stdio.h>
main()
{int n;
int x[n];
int i,c=0,k=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the values if x:");
for(i=1;i<=n;i++)
{scanf("%d",&x[i]);
}
for(i=1;i<=n;i++)
{if(x[i]>0)
{c=c+1;
}
else
{k=k+1;
}
}
printf("the total positive numbers are:%d\n",c);
printf("The total negative numbers are:%d",k);
}
