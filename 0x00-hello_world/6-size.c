#include <stdio.h>
/*
*main - using variables
*
*Description: using main function
*Return: 0
*/
int main(void){
    int a;
    long int b;
    long long int c;
    float d;
    char f;
    printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
    printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
    printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
    printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
    printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return 0;
}
