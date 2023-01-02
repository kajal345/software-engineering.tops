#include<stdio.h>

int main()
{
  	int Number, i;
  
  	printf("\n Please Enter the Maximum Integer Value (Upper Limit)  : ");
  	scanf("%d", &Number);
  	
  	printf("\n List of Natural Numbers from %d to 1 are \n", Number);  	
	for(i = Number; i >= 1; i--)
  	{
    	printf(" %d \t", i);
  	}
  
  	return 0;
}
