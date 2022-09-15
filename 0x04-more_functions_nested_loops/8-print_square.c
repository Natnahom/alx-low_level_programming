#include "main.h"
/**
 * print_square - check the code
 * @size: intitial
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
}
