#include "main.h"

/**
 * print_binary - converts a decimal number to binary
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	int i, no;

	if (!n)
		_putchar('0');
	for (no = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		no = 1;
		if (no == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}
}
