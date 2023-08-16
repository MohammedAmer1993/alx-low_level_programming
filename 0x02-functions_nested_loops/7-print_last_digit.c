#include "_putchar.h"
/**
  * print_last_digit - print digit
  * @num: number to get it's last digit
  *
  * Return: the last digit (int);
  */
int print_last_digit(int num)
{
	num = num % 10;
	_putchar(num + '0');
	return (num);
}
