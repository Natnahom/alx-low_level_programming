#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: string to paste in to
 * @src: string to be copied
 * @n: number of times
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
