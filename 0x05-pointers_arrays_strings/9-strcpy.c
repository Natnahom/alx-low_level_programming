#include "main.h"
#include <string.h>
/**
 * *_strcpy - copies string pointed to by src to dest
 * @dest: buffer pointed
 * @src: string
 * Return: the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = strlen(src);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
