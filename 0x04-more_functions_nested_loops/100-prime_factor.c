#include <stdio.h>
/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: 0 on success.
 */
int main(void)
{
	long i;
	long number = 612852475143;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		number /= i;
	}
		printf("%li\n", number);
	return (0);
}
