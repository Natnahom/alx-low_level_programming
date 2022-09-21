#include "main.h"
/**
 * print_buffer - makes a buffer
 * @b: string
 * @size: size
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
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j > 0)
					printf(" ");
				if (j + i > size - 1)
					printf("  ");
				else
					printf("%.2x", b[j + i]);
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
