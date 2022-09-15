#include "main.h"

/**
 * print_square - check the code
 *@size: intitial
 * Return: nothing.
 */

void print_square(int size)
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j < size; j++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
}
