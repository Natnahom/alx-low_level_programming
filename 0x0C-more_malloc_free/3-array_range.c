#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: p or Null
 */
int *array_range(int min, int max)
{
	int i, ran;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	ran = ((max + 1) - min);

	p = malloc(sizeof(int) * ran);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ran; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
