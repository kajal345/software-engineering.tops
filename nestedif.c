#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
	else if(b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
	return 0;
}
