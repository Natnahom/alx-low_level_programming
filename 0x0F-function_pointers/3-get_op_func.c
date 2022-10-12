#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @s: character
 * Return: Null or other function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opps[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == opps[i].op[0])
		{
			return (opps[i].f);
		}
		i++;
	}
	return (NULL);
}
