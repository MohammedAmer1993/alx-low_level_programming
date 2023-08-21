#include "_putchar.h"
/**
  * _puts - print a str followed by new line
  * @str: pointer to string
  * Return: nothing (void func)
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		++str;
	}
}
