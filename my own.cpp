#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
main()
{
int i,n;
struct library
{char bookname[20];
char auth[50];
int bookcode;
}lib[100];
	int ch;
	printf("1.Add books in library\n");
	printf("2.Display the list of books in library\n");
	printf("3.Delete books in library\n");
	printf("4.Display number of books in library\n");
	printf("5.Search books\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
switch(ch)
{
case 1:
{int n=0;
char x='y';
while (x='y')
{
n++;
printf("Book name=\n");
scanf("%s",lib[n].bookname);
printf("Author name=\n");
scanf("%s",lib[n].auth);
printf("Book code=\n");
scanf("%d",&lib[n].bookcode);
printf("Do you want to add more? Y or N\n");
scanf("%c",x);	
}
}
break;
case 2:
{
for(i=0;i<n;i++)
{
	printf("The available books are:\n");
	printf("Book name=%s\n",lib[i].bookname);
	printf("Author name=%s\n",lib[i].auth);
	printf("Book code=%d",lib[i].bookcode);
	}	
	}
break;
case 3:
{
printf("The total number of books in library are:%d\n",n);
}
break;	
case 4:
{char s[20];
printf("Enter the book name\n");
scanf("%s",s);
for(i=0;i<n;i++)
{
if(strcmp(s,lib[i].bookname) == 0)	
{
printf("Book name=%s",lib[i].bookname);
printf("Author of book=%s",lib[i].auth);
	}					
}
}
break;
}}
