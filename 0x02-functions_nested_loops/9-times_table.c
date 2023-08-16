#include "_putchar.h"

/**
  * times_table - table of 9
  *
  * Return: nothing (void func)
  */
void times_table(void)
{
	int num;
	int tmp;
	int st;
	int i;
	int f;
	int s;

	for (st = 0; st < 10; ++st)
	{
		num = 0;
		_putchar(num + '0');
		for (i = 0; i < 9; ++i);
		{
			num = num + st;
			tmp = num
			s = tmp % 10;
			tmp = tmp / 10;
			f = tmp % 10;
			_putchar(',');
			_putchar(' ');
			if (f == 0)
				_putchar(' ');
			else
				_putchar(f + '0');
			_putchar(s + '0');
		}
		_putchar('\n');
	}
}
