#include <stdarg.h>
/**
  * sum_them_all - sum any numbers of int
  * @n: number of parameters
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{

	int i;
	int sum = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	for(i = 0; i < n; ++i)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}

