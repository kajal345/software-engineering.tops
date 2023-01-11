/* Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age*/


#include<stdio.h>


struct employee
{
	int empno;
	char empname[40];
	char adress[30];
	int age;
	
};
int main()
{
	struct employee e1 = {1, "kajal","india",23};
	
	printf("%d emp no is\n",e1.empno);
	printf("%s empname is\n",e1.empname);
	printf("%s emp address is\n",e1.adress);
	printf("%d emp age is\n",e1.age);
	return 0;
}