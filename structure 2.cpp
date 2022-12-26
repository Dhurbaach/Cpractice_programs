#include<stdio.h>
main()
{int i,j,n;
printf("Enter the value of n:");
scanf("%d",&n);
struct std
{
char name[20];
int roll;
int age;
int marks[5];
}data[n];
for(i=1;i<=n;i++)
{
printf("Enter name:");
gets(name);
printf("Enter roll no.:");
scanf("%d",&data[i].roll);
printf("Enter age:");
scanf("%d",&data[i].age);
printf("Enter marks in 5 subjects:\n");
for(j=1;j<=5;j++)
{
scanf("%d",&data[i].marks[j]);
}
}
for(i=1;i<=n;i++)
{
	printf("Name=%s\n");
	puts(data[i].name);
	printf("Roll no=%d\n",data[i].roll);
	printf("Age=%d\n",data[i].age);
	printf("Marks in 5 subjects=\n");
 for(j=1;j<=5;j++)
{
printf("%d\n",data[i].marks[j]);
}
}
}
