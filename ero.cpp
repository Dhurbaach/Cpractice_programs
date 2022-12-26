#include<stdio.h>
#include<conio.h>
main()
{int i,j,n,k;
printf("Enter the value of n:");
scanf("%d",&n);
struct std
{
char name[20];
int roll;
int age;
int m[5];
}data[n];
for(i=0;i<n;i++)
{
printf("Enter name:");
scanf("%s",data[i].name);
printf("Enter roll no.:");
scanf("%d",&data[i].roll);
printf("Enter age:");
scanf("%d",&data[i].age);
printf("Enter marks in 5 subjects:\n");
for(j=0;j<5;j++)
{
scanf("%d",&data[i].m[j]);
}
}
for(k=0;k<n;k++)
{
	printf("\n\nName=%s\n",data[k ].name);
	printf("Roll no=%d\n",data[k].roll);
	printf("Age=%d\n",data[k].age);
	printf("Marks in 5 subjects=\n");
 for(j=0;j<5;j++)
{
printf("%d\n",data[k].m[j]);
}
}
getch();
}
