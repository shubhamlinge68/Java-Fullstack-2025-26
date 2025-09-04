#include<stdio.h>
void main()
{
	int x[5];
	int i,pos,max;
	
	printf("\n Enter 5 Integer Array valus :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	
	max=x[0];
	pos=0;
	for(i=0;i<5;i++)
	{
		if(x[i]>max)
		{
			max= x[i];
			pos=i;
		}
	}
	printf("\n The max value is :%d And the position is : %d",max,pos);
}
