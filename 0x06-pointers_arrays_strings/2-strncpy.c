#include "main.h"
/**
 * _strncpy - copies the string
 * @dest: string1
 * @src: string2
 * @n: number
 * Return: the copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
return (dest);
}
