#include "main.h"
/**
 * rot13 - prints in ROT13 style
 * @a: string
 * Return: a
 */
char *rot13(char *a)
{
	int i, j;
	char lett1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lett2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char tmp;

	i = 0;
	while (a[i] != '\0')
	{
		tmp = 0;
		for (j = 0; lett1[j] != '\0' && tmp == 0; j++)
			if (a[i] == lett1[j])
			{
				a[i] = lett2[j];
				tmp = 1;
			}
		i++;
	}
	return (a);
}
