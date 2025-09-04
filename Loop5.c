#include<stdio.h>
void main()
{
	int r,c,s;
	
	r=1;
	while(r<=5)
	{
		s=r;
		while(s<=4)
		{
			printf("  ");
			s++;
		}
		
		c=1;
		while(c<r*2)
		{
			printf(" *");
			c++;
		}
		printf("\n");
		r++;
	}
}
