#include<stdio.h>
void main()
{
	int n1,n2;
	
	printf("\n Enter n1:");
	scanf("%d",&n1);
	
	printf("\n Enter n2:");
	scanf("%d",&n2);
	
	while(n1<=n2)
	{
		printf("\t %d",n1);
		n1++;
	}
}
