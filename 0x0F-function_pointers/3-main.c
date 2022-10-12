#include "3-calc.h"

/**
 * main - using main function
 * @argc: integer
 * @argv: character
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int a, b, ans;
	char c;

	a = b = ans = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	c = argv[2][0];
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
	{
		printf("Error\n");
		exit(99);
	}

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		ans =  (get_op_func(argv[2]))(a, b);

		printf("%d\n", ans);
	return (0);
}
