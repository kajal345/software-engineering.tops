#include <stdio.h>
int main()
{

	int i, j, num;
	printf("enter the numbers: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d\t", j);
		}
		printf("\n");
	}
	return 0;
}