#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
	if (i == '2' || i == '4')
	{
	continue;
	}
	else
	_putchar(i);
	}
	_putchar('\n');
}
