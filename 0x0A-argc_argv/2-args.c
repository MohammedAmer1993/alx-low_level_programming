#include <stdio.h>

/**
  * main - entry point
  * @argc: number of arg passed
  * @argv: array of strings contain arg
  * Return: alaways zero (success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
