#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: value
 * @b: value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
