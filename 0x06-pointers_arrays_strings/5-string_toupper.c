#include "main.h"
/**
 * string_toupper - changes lowercase letters to upper case
 * @a: string
 *Return: uppercase
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; i < a[i]; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 'a' - 'A';
		}
	}
	return (a);
}
