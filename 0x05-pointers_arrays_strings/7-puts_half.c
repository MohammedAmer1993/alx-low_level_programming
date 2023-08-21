#include <string.h>
#include "_putchar.h"
/**
  * puts_half - print half of string
  * @str: pointer to the string
  * Return: Nothing (void func)
  */
void puts_half(char *str)
{
	int l;
	int i;

	l = strlen(str);
	if (l % 2 == 0)
		i = l / 2;
	else
		i = (l + 1) / 2;
	for (; i < l; ++i)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
