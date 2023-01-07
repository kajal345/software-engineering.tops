#include<stdio.h>

int getFactors()
{

	int num,n;
		printf("\nenter any numbers:-\n");
		scanf("%d",&num);
		
		for(n=1;n<=num;n++)
		{
			if(num%n==0)
			{
				printf("%d",n);
			}
		}
}
  int main()
  {
  	getFactors();
  	getFactors();
  	return 0;
}

