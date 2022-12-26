#include<stdio.h>
int lar(int arr[],int n);
main()
{
  int arr[100],x,n,i;
  printf("ENter the value of N:");
  scanf("%d",&n);
  printf("Enter the elements in the array:\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
	  }	
	  x=lar(arr,n);
	  printf("the largest array is:%d",x);
}
int lar(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return(arr[0]);
}
