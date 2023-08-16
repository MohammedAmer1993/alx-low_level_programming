#include "_putchar.h"

/**
  * print_last_digit - print digit
  * @num: number to get it's last digit
  *
  * Return: the last digit (int);
  */
int print_last_digit(int num)
{
	int tmp;

	if (num < 0)
	{
		num = num + 10;
		num = num * -1;
	}
	tmp = num % 10;
	_putchar(tmp + '0');
	return (tmp);
}
