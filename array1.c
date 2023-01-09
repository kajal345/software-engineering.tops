#include<stdio.h>

	int main()
	{
		int marks[3];
		printf("enter the marks of mathes:-");
		scanf("%d",&marks[0]);
		printf("enter the marks of scienece:- ");
		scanf("%d",&marks[1]);
		printf("enter the marks of english:-");
		scanf("%d",&marks[2]);
		printf("enter the marks of gujrati:-");
		scanf("%d",&marks[3]);
		
		printf("math=%d,phys=d,sc=%d  eng=%d",marks[0],marks[1],marks[2],marks[3]);
	
	return 0;
}