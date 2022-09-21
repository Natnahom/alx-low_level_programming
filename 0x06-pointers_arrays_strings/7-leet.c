#include "main.h"
/**
 * leet - encodes string in to 1337
 * @a: string
 * Return: a
 */
char *leet(char *a)
{
	int i, j;
	char lett[] = "aAeEoOtTlL";
	char num[] = "43071";

	i = 0;
	while (a[i] != '\0')
	{
		for (j = 0; lett[j] != '\0'; j++)
			if (a[i] == lett[j])
			{
				a[i] = num[j / 2];
			}
		i++;
	}
	return (a);
}
