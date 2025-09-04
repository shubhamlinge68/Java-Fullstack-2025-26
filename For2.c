#include<stdio.h>
void main()
{
	int n1,n2,i,sum=0;
	
	printf("\n Enter n1:");
	scanf("%d",&n1);
	
	printf("\n Enter n2:");
	scanf("%d",&n2);
	
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			printf("\t %d",i);
			sum=sum+i;
		}
	}
	
	printf("\n Sum is : %d",sum);
}
