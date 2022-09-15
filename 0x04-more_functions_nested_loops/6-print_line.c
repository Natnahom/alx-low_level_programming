#include "main.h"

/**
* print_line - printing line
* @n: integer params
*/
void print_line(int n)
{
	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int x = 0; x < n; x++)
		{
		_putchar(95);
		_putchar('\n');
		}
	}
}
