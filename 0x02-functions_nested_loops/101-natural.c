#include <stdio.h>
#include <math.h>
/**
* main - sum of multiples of 3 and 5
*
* Description: using main function
* Return: 0
*/
int main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1028; n++)
		if (n % 3 == 0 || n % 5 == 0)
		sum += n;
	printf("%d\n", sum);
}
