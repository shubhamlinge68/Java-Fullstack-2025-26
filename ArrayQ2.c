#include<stdio.h>
void main()
{
	int x[5];
	int i,pos,min;
	
	printf("\n Enter 5 Integer Array valus :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	
	min=x[0];
	pos=0;
	for(i=0;i<5;i++)
	{
		if(x[i]<min)
		{
			min= x[i];
			pos=i;
		}
	}
	printf("\n The min value is :%d And the position is : %d",min,pos);
}
