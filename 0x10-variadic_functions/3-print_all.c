#include <stdarg.h>
#include <stdio.h>
/**
  * print_all - printf strings
  * @format: format of string
  * Return: nothing void
  */
void print_all(const char * const format, ...)
{
	int i = 0 , hold = 0;
	va_list ap;
	char *tmp;

	while(format[i])
	{
		if (format[i] == 'i' || format[i] == 'f' 
				|| format[i] == 's' || format[i] == 'c')
			hold = i;
		++i;
	}
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d, ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f, ", va_arg(ap, float));
				break;
			case 'c':
				printf("%c, ", va_arg(ap, char));
				break;
			case 's':
				tmp = va_arg(ap, char *);
				if (tmp)
					printf("%s, ", tmp);
				else
					printf("%s, ", "nil");
				break;
		}
		++i;
	}
}

