#include "main.h"

/**
  * _puts_recursion - prints string recursevily
  * @s: the string
  * Return: nothing (void func)
  */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		return;
	}
	_putchar(*s);
	if (*(s + 1))
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
