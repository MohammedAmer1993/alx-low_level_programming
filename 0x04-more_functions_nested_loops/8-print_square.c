#include "_putchar.h"
/**
  * print_square - print a shape of square
  * @size: edge of square
  * Return: nothing (void)
  */
void print_square(int size)
{
	int i;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			for (z = 0; z < size; ++z)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
