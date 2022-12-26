#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
struct student
{
	char name[20];
	int age;
	int played;
	int runs;
}play[n];
FILE *fp;
 printf("how many records to store?");
scanf("%d",&n);
 fp=fopen("rec.txt","w+");
 for(i=0;i<n;i++)
 {
printf("Name:");
fflush(stdin);
gets(play[i].name);
printf("Age:");
scanf("%d",&play[i].age);
printf("Number of test played:");
scanf("%d",&play[i].played);
printf("Total runs:");
scanf("%d",&play[i].runs);
fprintf(fp,"%s%d%d%d",play[i].name,play[i].age,play[i].played,play[i].runs);
}
fclose(fp);
getch();
}
 
