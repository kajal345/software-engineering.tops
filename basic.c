#include<stdio.h>
int main()
{
    int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%d",j);//->for 123 4
			printf("*");
			
		}
		printf("\n");
		}	
	return 0;
	
}
