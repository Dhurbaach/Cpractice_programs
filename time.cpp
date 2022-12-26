#include<stdio.h>
#include<time.h>
main()
{
 time_t t;
 time(&t);	
	printf("%s",ctime(&t));
	
}
