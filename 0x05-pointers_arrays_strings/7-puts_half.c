#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int i, n1, n2;

	n1 = strlen(str);
	if (n1 % 2 != 0)
	{
		n2 = (n1 / 2) + 1;
	}
	else
	{
	n2 = n1 / 2;
	}
	for (i = n2; i < n1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
