#include <stdio.h>
/**
*main - prints 0-9 and a-f alphabets
*
*Description: using main function
*Return: 0 (correct)
*/
int main(void)
{
int i;
int ch;

for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
