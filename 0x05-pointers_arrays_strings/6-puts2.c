#include "_putchar.h"
/**
  * puts2 - print other number
  * @str: pointer to string
  * Return: nothing (void)
  */
void puts2(char *str)
{
	while (*str) 
	{
		if (*str % 2 == 0)
			_putchar(*str);
		++str;
	}
	_putchar('\n');
}
