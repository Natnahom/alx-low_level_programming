#include "main.h"
/**
 * _strncat - concatinates two strings
 * @dest: string1
 * @src: string2
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
