#include "main.h"
/**
*print_last_digit - prints the last digit
*@n: digit to find the last place of
*Return: The last digit
*/
int print_last_digit(int n)
{
	int lastD = n % 10;
	if (lastD < 0)
	lastD *= -1;
	_putchar(lastD + '0');
	return (lastD);
}
