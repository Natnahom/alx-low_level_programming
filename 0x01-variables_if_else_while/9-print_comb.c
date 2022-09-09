#include <stdio.h>
/**
*main - prints 0-9 with commas
*
*Description: using main function
*Return: 0 (correct)
*/
int main(void)
{
int i;
int j;

for (i = 48; i <= 57; i++)
{
for (j = ','; j <= ','; j++)
{
if (i <= 48)
{
continue;
}
putchar(' ');
putchar(j);
}
putchar(i);
}
return (0);
}
