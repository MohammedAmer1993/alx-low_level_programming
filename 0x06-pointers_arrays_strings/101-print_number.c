#include "main.h"
/**
  * print_number - print int
  * @n: number to be printed
  * Return: nothing (vod)
  */
void print_number(int n)
{
	int i = 1000000000;
	int tmp = 0;

	for (; i >= 10; i /= 10)
	{
		tmp = n / i;
		if (tmp)
			break;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		tmp = n / i;
		n = n - (tmp * i);
		_putchar('-');
		_putchar('0' - tmp);
		n = n * -1;
		i /= 10;
	}
	for (; i >= 10; i /= 10)
	{
		tmp = n / i;
		n = n - (tmp * i);
		_putchar('0' + tmp);
	}
	_putchar('0' + n);
}
