#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point to sum prog
  * @argc: number of arg passed
  * @argv: array of strings contain arg
  * Return: zero if success and 1 if fail
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			++j;
		}
	}
	for (i = 0; i < argc; ++i)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
