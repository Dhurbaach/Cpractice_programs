#include <stdio.h>
main()
{
	FILE*fp;
	char ch='y';
	int i;
	struct{
		char name[20];
		int basic;
	}rec[5];
	float da, hra, it,total;
	fp=fopen("emp.exe","ab");
	for(i=0;i<5;i++)
	{
		printf("Enter the name of the employee:");
		fflush(stdin);
		gets(rec[i].name);
		printf("Enter the basics:");
		scanf("%d",&rec[i].basic);
		da=0.1*rec[i].basic;
		hra=0.25*rec[i].basic;
	    total=rec[i].basic+da+hra;
	    it=0.2*total;
	    fwrite(&rec,sizeof(rec),1,fp);
	}
	fclose(fp);
	fp=fopen("emp.txt","rb");
	printf("%-30s %-30s","Name","Basics\n\n");
	fread(&rec,sizeof(rec),1,fp);
	for(i=0;i<5;i++)
	{printf("%-30s %-30d\n",rec[i].name,rec[i].basic);
	}
	fclose(fp);
}
