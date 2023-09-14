#include <stdlib.h>
#include <stdio.h>

/**
  * main - entry point
  * @argc: num of arg
  * @argv: argument strings
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	short *p = &main;
	int i = 0;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < atoi(argv[1]))
	{
		printf("%02x ", *p);
		++i;
	}
	printf("\n");
	return (0);
}
