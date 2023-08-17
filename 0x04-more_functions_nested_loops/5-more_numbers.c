#include "_putchar.h"
/**
  * more_numbers - func to print to 14
  * Return: nothing (void)
  */
void more_numbers(void)
{
	int i;
	int f;
	int s;
	int tmp;
	
	for (z = 0; z < 10; ++z)
	{
		for (i = 0; i < 15; ++i)
		{
			tmp = i;
			f = tmp % 10;
			tmp = tmp / 10;
			s = tmp % 10;
			if (i > 9)
				_putchar(s + '0');
			_putchar(f + '0');
		}
	}
	_putchar('\n');
}
