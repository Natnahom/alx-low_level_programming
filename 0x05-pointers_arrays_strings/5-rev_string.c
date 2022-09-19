#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char temp;
	int i, n1, n2;

	n1 = 0;
	n2 = 0;

	while (s[n1] != '\0')
	{
		n1++;
	}
	n2 = n1 - 1;
	for (i = 0; i < n2; i++)
	{
		temp = s[i];
		s[i] = s[n2];
		s[n2] = temp;
		n2 -= 1;
	}
}
