#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter  a:- ");
	scanf("%d",&a);
	printf("enter  b:- ");
	scanf("%d",&b);
	printf("enter c:- ");
	scanf("%d",&c);
	printf("maximum number is:- ");
	
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
	printf(" c is greater");
}
return 0;
}