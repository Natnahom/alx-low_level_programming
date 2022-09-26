#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (i + 1);
		}
		s++;
		i++;
	}
	return (i + 1);
}
