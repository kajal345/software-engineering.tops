#include<stdio.h>

int main()
{
	int age;//variable
	g:
		{
			printf("eligible\n");
		}
	l:
		{
			printf("not eligible\n");
		}
	
	
	printf("enter the age\n");//print age
	scanf("%d",&age);//user age
	
	
	if(age>=18)
	{
		goto g;
	}
	else
	{
		goto l;
	}
	return 0;
}