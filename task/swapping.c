#include<stdio.h>
int main()
{
   int a=10;
   int b=20;

   
   printf("\nBefore swapping value of a is %d b is %d",a,b);
   
   a=a+b;//10+20=30
   //without using third variable
   b=a-b;//30-20=10
   a=a-b;//30-10=20
    printf("\nAfter swapping value of a is %d b is %d",a,b);

return 0;	
	
}
