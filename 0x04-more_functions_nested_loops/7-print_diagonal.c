#include "main.h"
/**
*print_diagonal - prints \ diagonally
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
			putchar(' ');
			}
			if (i == j)
			{
				putchar('\\');
				putchar('\n');
			}
		}
	}
	}
	else
	{
	putchar('\n');
	}
}
