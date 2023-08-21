#include "_putchar.h"
/**
  * puts2 - print other number
  * @str: pointer to string
  * Return: nothing (void)
  */
void puts2(char *str)
{
	int i = 0;

	while (*str) 
	{
		if (i % 2 == 0)
			_putchar(*str);
		++str;
		++i;
	}
	_putchar('\n');
}
