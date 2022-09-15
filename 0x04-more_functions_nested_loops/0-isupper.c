#include "main.h"
/**
*_isupper - prints if c is upercase or not
*@c: character
*Return: 1 if upercase else 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
