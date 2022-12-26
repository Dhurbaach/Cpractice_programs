 #include<stdio.h>
 #include<string.h>
 	struct student
 	{
 	char name[20],add[20];
	 int tel[10];
	 };
 main()
 
 {
   int n,i,j; 
  struct student s[200],temp;
  printf("Enter the no. of records to store:");
  scanf("%d",&n);
  	FILE*ptr;
  	ptr=fopen("student.txt","w+b");
  	if(ptr==NULL)
  	{
  		printf("File can not be created!!\n");
	  }
  	for(i=0;i<n;i++)
  	{
  		printf("Enter name:\n");
  		scanf("%s",s[i].name);
  		fflush(stdin);
  		printf("Enter address:\n");
  		fflush(stdin);
  		scanf("%s",s[i].add);
  		printf("Enter telephone:\n");
  		scanf("%d",s[i].tel);
	  }
	fwrite(&s,sizeof(s),n,ptr);
	rewind(ptr);
	fread(&s,sizeof(s),n,ptr);
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
		if(strcmp(s[i].name,s[j].name)>0)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			}	
		}
	}
		printf("Name\t\tAddress\t\tTelephone\n");
	for(i=0;i<n;i++)
	{
	printf("%s\t\t%s\t\t%d\n",s[i].name,s[i].add,s[i].tel);
}
	fclose(ptr); 
 }
