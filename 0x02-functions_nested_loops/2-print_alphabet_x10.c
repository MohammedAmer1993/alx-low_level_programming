#include "_putchar.h"

/**
  * print_alphabet_x10 - function print alphabet 10 times
  *
  * Return: no return value (void func)
  */
void print_alphabet_10x(void)
{
	int i = 0;

	while (i < 10)
	{
		int z = 0;

		while (z < 26)
		{
			_putchar('a' + z);
			++z;
		}
		_putchar('\n');
		++i;
	}
}
