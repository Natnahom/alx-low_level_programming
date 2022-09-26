#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
