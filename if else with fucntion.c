#include<stdio.h>

void namaste();
void benjour();

int main()
{   
    int ch; 
	printf("enter you are indian or french");
	scanf("%d",&ch);
	if(ch=='i')
	{
		namaste();
	}
	else
	{
		banjour();
	}
	return 0;
}

void namaste()
{
	printf("namste");
}
void banjour()
{
	printf("banjour");
}