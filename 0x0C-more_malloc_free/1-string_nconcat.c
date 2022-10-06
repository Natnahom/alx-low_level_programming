#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: integer
 * Return: s1 or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *p;

	len1 = n;
	if (s1 == NULL)
	{
		s1 = NULL;
	}
	if (s2 == NULL)
	{
		s2 = NULL;
	}
	if (len1 < 0)
		return (NULL);
	if (len1 >= strlen(s2))
		len1 = strlen(s2);
	len2 = strlen(s1) + len1 + 1;

	p = malloc(sizeof(*p) * len2);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len1; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
