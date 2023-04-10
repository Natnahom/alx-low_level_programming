#include "search_algos.h"

/**
  * linear_search - using the function to return index
  *
  * @array: an array to be searched through
  * @size: size of the array
  * @value: the values in the array
  * Return: the index of the value
  *
  * Description: Prints a value every time it is compared in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
