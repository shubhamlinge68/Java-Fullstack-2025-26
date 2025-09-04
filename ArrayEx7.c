#include<stdio.h>
void main()
{
	int no[10] = {12,23,45,24,56,67,45,67,34,34};
	int i,user_number,cot=0;
	
	printf("\n Enter Number to search in Array:");
	scanf("%d",&user_number);
	
	for(i=0;i<10;i++)
	{
		if(no[i]==user_number)
		{
			cot++;
		}
		
	}
	if(cot==0)
	{
		printf("\n Value not found");
	}
	else
	{
		printf("\n Value found in Array for %d times",cot);
	}
}
