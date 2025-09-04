#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	
	printf("\n Enter 5 integers array valus :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	printf("\n Array valus are :");
	for(i=0;i<=4;i++)
	{
		printf(" %d",arr[i]);
	}
}
