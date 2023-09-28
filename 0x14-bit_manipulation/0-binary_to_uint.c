#include "main.h"

/**
  * binary_to_uint - convert string of 0 and 1 to unsigned int
  * @b: the string to be converted
  * Return: the number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;
	unsigned int mult = 1;

	if (!b)
		return (0);
	while (b[i])
		++i;
	while (i)
	{
		--i;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (mult * (b[i] - '0'));
		mult *= 2;
	}
	return (num);
}
