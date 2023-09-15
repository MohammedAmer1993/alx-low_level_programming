#include <stdarg.h>
#include <stdio.h>
/**
  * print_all - printf strings
  * @format: format of string
  * Return: nothing void
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *tmp;
	char *sep = "";

	va_start(ap, format);
	while (!format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 's':
				tmp = va_arg(ap, char *);
				if (tmp)
					printf("%s%s", sep, tmp);
				else
					printf("%s%s", sep, "nil");
				break;
		}
		sep = ", ";
		++i;
	}
	printf("\n");
	va_end(ap);
}
