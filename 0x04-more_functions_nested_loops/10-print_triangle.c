#include "main.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @n: the height of the triangle.
 */
 void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= 1; j--)
		{
			if (i < j)
				putchar(' ');
			else
			{
				putchar('#');
			}
        }
        putchar('\n');
	}
	}
	else
		putchar('\n');
}
