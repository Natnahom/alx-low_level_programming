#include "main.h"
/**
 * print_square - check the code
 * @n: intitial
 */
void print_square(int n)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
