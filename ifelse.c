/* if else
if(condition)
{
	this code will be excuted;
}
else
{
 	this code will be excuted;
}



else if

if()
{
}
elseif()
{
}
elseif()
{
}
else
{
}*/

#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:- ");
	scanf("%d",&age);
	printf("you entered your age %d\n",age);
	if(age>18)
	{
		printf("you can vote");
	}
	else if(age>10)
	{
		printf("you are between 10 to 18");
	}
	else
	{
		printf("you can not vote");
	}
	return 0;
}