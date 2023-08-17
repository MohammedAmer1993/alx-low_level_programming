#include "_putchar.h"
/**
  * print_line - print a straiht line
  * @n: length of the line
  * Return: nothing (void)
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		_putchar('_');
	}
	_putchar('\n');
}
