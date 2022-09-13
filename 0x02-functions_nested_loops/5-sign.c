#include "main.h"
/**
*print_sign - checks if c is letter
*@n: character to test
*Return: 1 or 0
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('-');
return (-1);
}
}
