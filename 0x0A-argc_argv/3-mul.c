#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point to multiplication prog
  * @argc: number of arg passed
  * @argv: array of strings contain arg
  * Return: zero if success and 1 if fail
  */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
