#include <stdio.h>
int main() {  
    int c;
    printf("Enter a aascii value of character : ");
    scanf("%d", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %d= %c", c,c);
    
    return 0;
}