#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mul,division,mod;
	printf("Enter a number 1 :- ");
	scanf("%d",&num1);
	printf("Enter a number 2 :- ");
	scanf("%d",&num2);
	add=num1 + num2;
	sub=num1 - num2;
	mul=num1 * num2;
	division=num1 / num2;
	mod=num1 % num2;
	printf("Addition of numbers is %d ",add);
	printf("\nSubtraction of numbers is %d ",sub);
	printf("\nMultiplication of numbers is %d ",mul);
	printf("\nDivision of numbers is %d ",division);
	printf("\nModulo of numbers is %d ",mod);
	return 0;
}