#include "main.h"
/**
*jack_bauer - hours
*
*Return: 1 or 0
*/
void jack_bauer(void)
{
int h, m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
putchar(h / 10);
putchar(h % 10);
putchar(':');
putchar(m / 10);
putchar(m % 10);
putchar('\n');
}
}
}
