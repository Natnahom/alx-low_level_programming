#include "main.h"
/**
*print_to_98 - prints natural numbers from n-98
*@n: initial number
*Return: nothing
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		_putchar(n);
		_putchar(98);
	}
	else
	{
		for (n = n; n > 98; n--)
		_putchar(n);
	    _putchar(98);
	}
}
