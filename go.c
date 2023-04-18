{
	#include<stdio.h>




int main()
{
	//jumping statement
	int age;
	g://label
		{
			printf("eligiblale\n");
		}
	l://label
		{
			
			printf("not eligible");
		}
		printf("enter the age");
		scanf("%d",&age);
		
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