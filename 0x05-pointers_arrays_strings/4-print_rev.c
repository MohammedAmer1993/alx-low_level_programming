#include "_putchar.h"
/**
  * print_rev - prints reversed str
  * @s: the print to be reversed
  * Return: no return void func
  */
void print_rev(char *s)
{
	char *tmp = --s;

	while (*s)
	{
		++s;
	}
	--s;
	while (s != tmp)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}
