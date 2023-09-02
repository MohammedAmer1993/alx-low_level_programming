#include <stdio.h>

/**
  * main - entry point
  * @argc: number of arg passed
  * @argv: array of strings contain arg
  * Return: alaways zero (success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
