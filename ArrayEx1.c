#include<stdio.h>
void main()
{
	int x[5] = {11,12,13,14,15};
	int y[10] = {12,23,34,12,32,32,45,65,34,23};
	int i;
	
	printf("\n Array variable x = %d %d %d %d %d",x[0],x[1],x[2],x[3],x[4]);
	
	printf("\n Array variable y= ");
	for(i=0;i<=9;i++)
	{
		printf(" %d",y[i]);
	}
}
