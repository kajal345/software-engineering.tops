
#include<stdio.h>

int main()
{
	
	int day;
	printf("enter the day");
	scanf("%d",&day);
	
	switch(day)//switch(variable name)
	{
	
	case 1:
		printf("monday");
		break;
	case 2:
		printf("Tuesday");
		break;
			case 3:
		printf("wednesday");
		break;
			case 4:
		printf("Thursday");
		break;
			case 5:
		printf("friday");
		break;
			case 6:
		printf("saturday");
		break;
			case 7:
		printf("sunday");
		break;
		
		
		
		default:
			printf("please enter values between 1- 7");
		
		
}
		
	return 0;
}
