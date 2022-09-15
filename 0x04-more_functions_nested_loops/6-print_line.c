#include "main.h"
/**
*print_line - prints line
*@n: number of line
*Return: nothing
*/
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i <= n; i++)
		_putchar('_');
	}
	else
	_putchar('\n');
}
