#include<stdio.h>
void main()
{
	int x[5];
	int i,sum=0;
	
	printf("\n Enter array of 5 integer values:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+x[i];
		
	}
	printf("\n Addition array is = %d",sum);
}
