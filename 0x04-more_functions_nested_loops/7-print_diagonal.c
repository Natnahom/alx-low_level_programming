#include "main.h"
/**
*print_diagonal - prints diagonally
*@n: character
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			if (i != 1)
			{
			_putchar(' ');
			}
			if (i == j)
			{
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	}
	else
	{
	_putchar('\n');
	}
}
