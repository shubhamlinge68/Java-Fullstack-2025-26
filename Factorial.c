#include<stdio.h>
void main()
{
	int no,fact,i;
	
	printf("\n Enter a number:");
	scanf("%d",&no);
	
	fact=1;
	for(i=no;i>=1;i--)
	{
		fact=fact*i;
	
	}
		printf("\n The factorial is : %d",fact);
}
