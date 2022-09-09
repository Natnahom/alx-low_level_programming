#include <stdio.h>
/**
*main - prints z-a alphabets
*
*Description: using main function
*Return: 0 (correct)
*/
int main(void)
{
int ch;

for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
