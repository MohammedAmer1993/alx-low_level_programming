#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point to change prog
  * @argc: number of arg passed
  * @argv: array of strings contain arg
  * Return: zero if success and 1 if fail
  */
int main(int argc, char *argv[])
{
	int q = 0;
	int d = 0;
	int f = 0;
	int t = 0;
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	q = cents / 25;
	cents = cents - (q * 25);
	d = cents / 10;
	cents = cents - (d * 10);
	f = cents / 5;
	cents = cents - (f * 5);
	t = cents / 2;
	cents = cents - (t * 2);
	printf("%d\n", q + d + f + t + cents);
	return (0);
}
