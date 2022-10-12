#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the integer to check
 * @size: size of array
 * @cmp: function pointer
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ans;

	ans = -1;
	if (array && cmp)
	{
		if (size <= 0)
			return (ans);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				ans = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
				return (ans);
		}
	}
	return (ans);
}
