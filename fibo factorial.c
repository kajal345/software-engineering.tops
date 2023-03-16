/*Recursion is the process of repeating items in a self-similar way. 
In programming languages, if a program allows you to call a function inside the same function,
 then it is called a recursive call of the function.*/
 #include <stdio.h>

int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

   int i;
	
   for (i = 0; i < 10; i++) {
      printf("%d\t\n", fibonacci(i));
   }
	
   return 0;
}