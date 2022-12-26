#include<stdio.h>
main()
{
	struct{
		char name[20];
		int age;
		char address[20];
	}rec[10];
	printf("Enter the records:");
	printf("enter name\n");
	scanf("%s",rec.name);
	printf("enter age\n");
	scanf("%d",&rec.age);
	printf("enter address\n");
	scanf("%s",rec.address);
	printf("Name:%s\n ",rec.name);
	printf("Age:%d\n ",rec.age);
	printf("Address:%s\n ",rec.address);
}
