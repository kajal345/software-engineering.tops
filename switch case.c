#include<stdio.h>

int main()
{
	int age;
	printf("enter the age:- ");
	scanf("%d",&age);
	switch(age)
	{
		case 2:
			printf("age is 2");
			break;
		case 45:
			printf("age is 45");
			break;
		case 23:
			printf("age is 23");
			break;
		default:
			printf("not a number");
	}
	return 0;
}


