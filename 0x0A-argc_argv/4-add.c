#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		if (argv[i][0] == '0' && strlen(argv[i]) == 1)
			continue;
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 0; i < argc; ++i)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
