#include "main.h"
/**
*print_last_digit - checks if c is letter
*@n: character to test
*Return: 1 or 0
*/
int print_last_digit(int n)
{
int n;
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}
