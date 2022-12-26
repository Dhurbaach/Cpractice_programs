#include<stdio.h>
main()
{
	int i,diff1,diff2;
 struct height
{
	int feet;
	int inch;
}h[100];
printf("Enter the records\n");
for(i=0;i<2;i++)
{
 	printf("Enter in feet:\n");
	scanf("%d",&h[i].feet);
		printf("Enter in inches:\n");
	scanf("%d",&h[i].inch);
}
diff1=h[0].feet-h[1].feet;
diff2=h[0].inch-h[1].inch;
printf("The difference of their height is:%dfeet %dinch",diff1,diff2);
}
