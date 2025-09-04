#include<stdio.h>
void main()
{
	int numbers[10] = {12,23,13,43,56,34,56,34,76,78};
	int i;
	
	printf("\n Only Even numbers:");
	for(i=0;i<=9;i++)
	{
		if(numbers[i]%2==0)
		{
			printf(" %d",numbers[i]);
		}
	}
	
	printf("\n Only For Odd Numbers:");
	for(i=0;i<=9;i++)
	{
		if(numbers[i]%2!=0)
		{
			printf(" %d",numbers[i]);
		}
	}
}
