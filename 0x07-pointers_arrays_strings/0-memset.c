#include "main.h"

/**
 * _memset - fills the memory buffer with a constant byte
 * @s: string
 * @b: character
 * @n: number of times
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
