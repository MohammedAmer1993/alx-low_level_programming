#include "_putchar.h"
/**
  * print_alphabet - print all alphabet letters in lower case
  *
  * Return: dosent't return anything (void func)
  */
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		++i;
	}
	_putchar('\n');
}
