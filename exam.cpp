#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	struct student
	{
		char name[30];
		int roll;
		float marks;
	};
	struct student s[5],temp;
	FILE *p;
	int i,n,j;
	p=fopen("student.txt","w");
	for(i=0;i<5;i++)
	{
		printf("Enter the name of the student:");
		scanf("%s",s[i].name);
		printf("Enter the roll.no");
		scanf("%d",&s[i].roll);
		printf("Enter the marks of the student:");
		scanf("%f",&s[i].marks);
	}
	printf("writing this to file...");
	fwrite(&s,sizeof(s),5,p);
	rewind(p);
	printf("Reading the contents from the file...");
	while(fread(&s,sizeof(s),5,p))
	{
		for(i=0;i<5;i++)
		{
			for(j=1;j<6;j++)
			{
				if(strcmp(s[i].name,s[j].name)>0)
				{
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
			}
		}
	}
	printf("\n records of the student in sorted order is!!!");
	printf("\name\troll.no.\tmarks\t\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t%d\t\t\t,%f",s[i].name,s[i].roll,s[i].marks);
	}
	fclose(p);
	getch();
}
