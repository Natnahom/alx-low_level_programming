#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long x, y, z, carry;

	count = 0;
	i = 0;
	j = 1;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	x = i % 1000;
	i = i / 1000;
	y = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (x + y) / 1000;
		z = (x + y) - carry * 1000;
		k = (i + j) + carry;
		x = y;
		y = z;
		i = j;
		j = k;
		if (z >= 100)
			printf("%lu%lu", k, z);
		else
			printf("%lu0%lu", k, z);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
