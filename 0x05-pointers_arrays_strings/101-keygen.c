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

	srand(time(NULL));
	i = (rand() % 9999 + 1);

	printf("%c", i);

	return (0);
}
