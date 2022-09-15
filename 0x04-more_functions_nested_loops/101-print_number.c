#include "main.h"
/**
 * print_number - prints a number
 * @n : Input number
 */

void print_number(int n)
{
	long len, res, i, temp, expo;

	res = n;
	expo = len =  1;

	if (res < 0)
	{
		res *= -1;
		putchar('-');
	}

	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

/*Create Exponent*/
	for (i = 1; i < len; i++)
		expo *= 10;
/*Main */
	while (expo > 1)
	{
		putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	putchar(res % 10 + '0');
}
