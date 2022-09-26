#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
		i++;
	}
	return (i);
}
