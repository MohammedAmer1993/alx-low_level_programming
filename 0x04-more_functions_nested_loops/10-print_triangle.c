#include "_putchar.h"
/**
  * print_triangle - print a triangle of #
  * @size: size of triangle
  * Return: nothing (void)
  */
void print_triangle(int size)
{
	int i;
	int z;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (z = 0; z < (size - i); ++z)
			{
				_putchar(' ');
			}
			for (j = 0; j < (size - z); ++j)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
