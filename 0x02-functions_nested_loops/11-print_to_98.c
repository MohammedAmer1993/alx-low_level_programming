#include <stdio.h>

/**
  * print_to_98 - print numbers to limit
  * @n: the start
  *
  * Return: nothing (void func)
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			--n;
		}
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			++n;
		}
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
}
