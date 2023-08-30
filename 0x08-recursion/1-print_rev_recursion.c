#include "main.h"

/**
  * _print_rev_recursion - prints reversed string
  * @s: the string
  * Return: nothing (void func)
  */

void _print_rev_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	if (*(s + 1))
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
