 #include<stdio.h>
 #include<string.h>
 	struct book
 	{
 	char name[20],nationality[20];
	 int num,record;
	 };
 main()
 
 {
   char ch; 
  struct book s;
  	FILE*ptr;
  	ptr=fopen("records.txt","w+b");
  	if(ptr==NULL)
  	{
  		printf("File can not be created!!\n");
	  } 
  	do
  	{
  		printf("Enter name:\n");
  		scanf("%s",s.name);
  		fflush(stdin);
  		printf("Enter nationality:\n");
  		fflush(stdin);
  		scanf("%s",s.nationality);
  		printf("Enter number of books of author:\n");
  		scanf("%d",&s.num);
  		printf("Enter bool record no.:\n");
  		scanf("%d",&s.record);
  		fwrite(&s,sizeof(s),1,ptr);
  		printf("Want to add more?Y or N..\n");
  		scanf(" %c",&ch);
	  }while(ch=='y'||ch=='Y');
	  	rewind(ptr);
	  		printf("Name\t\tNationality\t\tNumber\t\tRecord\t\t\n");
while(fread(&s,sizeof(s),1,ptr)==1)
	{
		printf("%s\t\t%s\t\t\t%d\t\t\t%d\n",s.name,s.nationality,s.num,s.record);
	}
	 fclose(ptr);
}
