#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: the size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			_putchar(i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j > 0)
					_putchar(' ');
				if (j + i > size - 1)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(b[j + i]);
				j++;
			}
			_putchar(' ');
			j = 0;
			while (j < 10)
			{
				if (j + i > size - 1)
					break;
				if (b[j + i] >= ' ' && b[j + i] <= '~')
					_putchar(b[j + i]);
				else
					_putchar('.');
				j++;
			}
			_putchar('\n');
			i += 10;
		}
	}
}
