/*switch case:
	switch(expresion)
	{
	case 1:
		printf("");
		break;
	case 2:
		printf("");
		break;
		
		default
}*/

#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	switch(num)
	{
	
	case 1:
		printf("monday");
		break;
	case 2:
		printf("tuesday");
		break;
	default:
		printf("please enter number between 1-7");
		
	}
	
	return 0;
}
