#include<stdio.h>
#include<string.h>
void main()
{
	char text[20];
	
	printf("\n Enter the text of digit:");
	scanf("%s",&text);
	
	switch(0)
	{
	
		case 0:
			switch(strcmp(text,"zero")==0)
			{
			case 1:
			printf("\n It is zero");
			}
		
		case 1:
			switch(strcmp(text,"one")==0)
			{
			case 1:
			printf("\n It is one");
			}
		case 2:
			switch(strcmp(text,"two")==0)
			{
			case 1:
			printf("\n It is two");
			}
		case 3:
			switch(strcmp(text,"three")==0)
			{
			case 1:
			printf("\n It is three");
			}		
		case 4:
			switch(strcmp(text,"four")==0)
			{
			case 1:
			printf("\n It is four");
			}
		
	}		
	
}
