#include "main.h"

/**
 * _pow_recursion - prints x the power of y
 * @x: number
 * @y: number
 * Return: x power of y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y <= 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
