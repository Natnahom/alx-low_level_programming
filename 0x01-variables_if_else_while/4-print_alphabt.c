#include <stdio.h>
/**
*main - declare a random num
*
*Description: using main function
*Return: 0 (correct)
*/
int main(void)
{
int ch;
int CH;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q')
{
continue;
}
else if (ch == 'e')
{
continue;
}
putchar(ch);
}
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}
return (0);
}
