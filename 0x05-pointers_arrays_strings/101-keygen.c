#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int random;
	int total;

	srand(time(NULL));
	for (i = 0, total = 2772; total > 122; i++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		total -= random;
	}

	printf("%c", total);
	return (0);
}
