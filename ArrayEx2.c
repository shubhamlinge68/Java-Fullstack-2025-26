#include<stdio.h>
void main()
{
	char vo[10] = {'a','e','i','o','u','A','E','I','O','U'};
	int i;
	
	printf("\n Small Vowels are = ");
	for(i=0;i<=4;i++)
	{
		printf(" %c",vo[i]);
	}
	printf("\n Capital Vowels are = ");
	for(i=5;i<=9;i++)
	{
		printf(" %c",vo[i]);
	}
}
