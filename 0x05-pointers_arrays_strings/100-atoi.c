#include "main.h"
/**
 * _atoi - converts string as a integer
 * @s: string
 * Return: result
 */
int _atoi(char *s)
{
	short bool;
	int i, j, res;

	i = j = res = bool = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			bool = 1;
		}
		else if (bool == 1)
			break;
		i++;
	}
	res *= j;
	return (res);
}
