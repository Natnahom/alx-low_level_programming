#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator: loops through the array
 * @array: array
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
