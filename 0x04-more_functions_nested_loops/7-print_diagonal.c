#include "_putchar.h"
/**
  * print_diagonal - print a shape of diagonal
  * @n: height of diagonal
  * Return: nothing (void)
  */
void print_diagonal(int n)
{
	int i;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			for (z = 0; z < i; ++z)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
