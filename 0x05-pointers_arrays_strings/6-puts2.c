#include "main.h"
#include <string.h>
/**
 * puts2 - prints string
 * @str: string
 */
void puts2(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
