#include <stdlib.h>
#include <time.h>
/**
*main - declare a random num if positive
*
*Description: using main function
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
printf(n, "%d is positive");
}
else if (n < 0)
{
printf(n, "%d is negative");
}
else
{
printf(n, "%d is zero");
}
	return (0);
}

