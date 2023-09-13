#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point
  * @argc: number of arg
  * @argv: array of strings of arg
  * Return: 0 means success
  */

int main(int argc, char *argv[])
{
	int result;
	int (*f)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' &&
			*argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	result = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
