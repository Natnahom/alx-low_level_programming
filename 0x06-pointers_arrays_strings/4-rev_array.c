#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number
 */
void reverse_array(int *a, int n)
{
int i, temp;

temp = 0;
n -= 1;
	for (i = 0; i <= n;)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
