#include<stdio.h>
void main()
{
	int x[5];
	int i;
	
	printf("\n Enter array of 5 integer values:");
	for(i=0;i<=4;i++)
	{
		scanf(" %d",&x[i]);
	}
	
	printf("\n The reverce of 5 integers is :");
	for(i=4;i>=0;i--)
	{
		printf(" %d",x[i]);
	}
}
