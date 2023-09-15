#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - print variable number of strings
  * @separator: between strings
  * @n: number of strings
  * Return: nothing void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *tmp;

	if (n == 0 && separator)
	{
		printf("%s\n", separator);
		return;
	}
	va_start(ap, n);
	tmp = va_arg(ap, char *);
	if (separator)
	{
		if (tmp)
			printf("%s", tmp);
		else
			printf("nil");
		for (i = 0; i < n - 1; ++i)
		{
			tmp = va_arg(ap, char *);
			if (tmp)
				printf("%s%s", separator, tmp);
			else
				printf("%s%s", separator, "nil");
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			tmp = va_arg(ap, char *);
			if (tmp)
				printf("%s", tmp);
			else
				printf("%s", "nil");
		}
	}
	va_end(ap);
}
