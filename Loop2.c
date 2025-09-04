#include<stdio.h>
void main()
{
	int r,c;
	
	r=1;
	while(r<=5)
	{
	
		c=1;
		while(c<=5)
		{
			if(r%2==1)
			printf(" *");
			else
			printf(" @");
			c++;
		}
		printf("\n");
		r++;
	}
}
