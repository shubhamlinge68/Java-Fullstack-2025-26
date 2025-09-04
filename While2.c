#include<stdio.h>
void main()
{
	int no,m,ans;
	
	printf("\n Enter any number:");
	scanf("%d",&no);
	
	m=1;
	while(m<=10)
	{
		ans=no*m;
		printf("\n %d",ans);
		m++;
	}
}
