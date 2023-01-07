#include<stdio.h>
void test()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
    printf("sum is %d",a+b);
}

int main()
{
	test();
	test();
	test();
	test();
	return 0;
}