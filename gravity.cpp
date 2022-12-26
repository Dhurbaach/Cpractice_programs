#include<stdio.h>
main()
{
	char cha='G';
	int g=10;
	float gravity=9.81;
	printf("%%d%%f\n");
	printf("%10d\n",g);
	printf("%3c\n",cha);
	printf("%.3f\n",gravity);
	printf("%-10.1f%d\n",gravity,g);
}
