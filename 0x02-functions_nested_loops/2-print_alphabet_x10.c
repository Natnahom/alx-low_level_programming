#include "main.h"
/**
*print_alphabet_x10 - repeats the alphabets 10 times
*
*Return: nothing
*/
void print_alphabet_x10(void)
{
int i;
char alp;

for (i = 0; i < 10; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
