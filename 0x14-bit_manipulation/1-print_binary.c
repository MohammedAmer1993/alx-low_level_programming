#include "main.h"

/**
  * print_binary - print a number in binary
  * @n: the number to be printed
  * Return: nothing void func
  */
void print_binary(unsigned long int n)
{
	unsigned int mul = 1;
	unsigned int oth = 1;

	if (!n)
	{
		_putchar('0');
		return;
	}
	while (1)
	{
		if (mul * 2 < n)
			mul *= 2;
		else
		{
			_putchar('1');
			n -= mul;
			break;
		}
	}
	while (n)
	{
		if (oth * 2 < mul)
			oth *= 2;
		else if (oth <= n)
		{
			_putchar('1');
			n = n - oth;
			if (n == 0)
				break;
			mul = oth;
			oth = 1;
		}
		else
		{
			_putchar('0');
			mul = oth;
			oth = 1;
		}
	}
	mul = 1;
	while (oth != 1)
	{
		if (mul * 2 < oth)
		{
			_putchar('0');
			mul *= 2;
		}
		else
		{
			_putchar('0');
			return;
		}
	}
}
