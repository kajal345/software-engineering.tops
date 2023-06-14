#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
			//printf("*");
		//printf("%d",j);//pattern
			//printf("%d",j);//for print numbers
		}
		printf("\n");
	}
	return 0;
}
