#include "main.h"

/**
  * print_binary - print a number in binary
  * @n: the number to be printed
  * Return: nothing void func
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_binary(n / 2);
	_putchar((n % 2) + '0');
}
