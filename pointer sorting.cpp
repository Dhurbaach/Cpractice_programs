#include<stdio.h>
#include<stdlib.h>
main()
{   
    system("cls");
	int a[100],i,j,temp;
	printf("Enter elements in array:\n");
	for(i=0;i<10;i++)
	{
	 scanf("%d",a[i]);
	}
		for(i=0;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("The sorted datas are.....\n");
		for(i=0;i<10;i++)
	{
		printf("%d",a[i]); 
	}
	printf("The second largest element is:\n");
	printf("%d",a[8]);
}
