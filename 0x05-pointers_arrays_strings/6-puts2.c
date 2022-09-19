#include "main.h"
/**
 * puts2 - prints string
 * @str: string
 */
void puts2(char *str)
{
	char i, n;

	n = strlen(str);
	for (i = 0; i < n; i+=2)
	{
		putchar(str[i]);
	}
}
