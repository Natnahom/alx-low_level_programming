#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: string
 * Return: a
 */
char *cap_string(char *a)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 1; a[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (a[i - 1] == sep[j] && (a[i] >= 'a' && a[i] <= 'z'))
			{
				a[i] -= 'a' - 'A';
			}
		}
	}
	return (a);
}
