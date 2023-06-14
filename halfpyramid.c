#include <stdio.h>  
 
void main()  
{  
     
    int i, j,num, k;  //variables declaration
	printf (" Enter a number to define the columns: \n "); //user inputt
    scanf("%d", &num);   
    printf("\n");  
    for (i = 1; i <=num; i++)   //nested for loop
    {  
        for (j = i; j <num; j++)   
        {  
            printf(" ");  //space 
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");//for new line   
    }  
}


