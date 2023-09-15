#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - print all numbers
  * @separator: the string seperating others
  * @n: number of int
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	for (i = 0; i < n; ++i)
	{
		printf("%s%d", separator, va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
