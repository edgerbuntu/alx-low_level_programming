#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main program
 * @argc: parameter numbers
 * @argv: array whit adress of parameters
 * Return: 0 or exit
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
	 && *argv[2] != '/' && *argv[2] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && *argv[3] == '0') ||
	 (*argv[2] == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
