#include<stdio.h>

int main()
{
	
	int a=10;
	int b=20;
	int temp;
	printf("Before swapping value of a is %d b is %d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
/*	a=a+b;
	b=a-b;
	a=a-b;*/
	
	printf("\nAfter swapping value of a is %d b is %d",a,b);
	
	
	
	return 0;
}
