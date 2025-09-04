#include<stdio.h>
void main()
{
	int num1,num2,choice;
	
	printf("\n Enter first number:");
	scanf("%d",&num1);
	
	printf("\n Enter Second number:");
	scanf("%d",&num2);
	
	printf("\n 1 for addition");
	printf("\n 2 for subtration");
	printf("\n 3 for divsion");
	printf("\n 4 for multiplication");
	
	printf("\n\n Enter choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
			
			case 1:
				printf("\n The Addition Is : %d",(num1+num2));
				break;
			case 2:
				printf("\n The subtration is : %d",(num1-num2));
				break;
			case 3:
				printf("\n The divition is : %.2f",((float)num1/num2));
				break;
			case 4:	
				printf("\n The multiplication is : %d",(num1*num2));
				break;
	}			
}
