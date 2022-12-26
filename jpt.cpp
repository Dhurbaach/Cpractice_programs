#include<stdio.h>
#include<string.h>
#include<conio.h>
	struct student
	{
		char name[20];
		char address[20];
		int id;
	};
 void fun(struct student std[]);
main()
{ int i,n;
struct student std[n],temp;	
	printf("Enter the number of records to store:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter name:\n");
	scanf("%s",std[i].name);
	printf("Enter address:\n");
	scanf("%s",std[i].address);
	printf("Enter id:\n");
	scanf("%d",&std[i].id);
}
	fun(std);
	printf("The sorted data is:\n");
	for(i=0;i<n;i++)
{
	printf("name=%s",std[i].name);
	printf("address=%s",std[i].address);
	printf("Id number=%d",std[i].id);
}
getch();
}
void fun(struct student stdu[])
{
		int i,j, n,k;

for(i=0;i<n;i++)
{
	for(j=1;j<n;j++)
	{
		if(strcmp(stdu[i].name,stdu[j].name)>0)
		temp=stdu[i];
		stdu[i]=stdu[j];
		stdu[j]=temp;
	}
		}		
}
