#include <stdio.h>
/**
* main - prints
*
* Description: using main function
* Return: 0
*/
int main(void)
{
	unsigned long count, i, j, k, sums;
i = sums = 0;
j = 1;

	for (count = 0; count < 98; count++)
	{
	k = i + j;
	i = j;
	j = k;
	printf("%lu", k);
	printf(", ");
	}
	printf("\n");
return (0);
}
