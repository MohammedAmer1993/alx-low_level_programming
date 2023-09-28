#include "main.h"
/**
  * get_bit - to get a certain bit
  * @n: the number
  * @index: the bit you want
  * Return: the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (((1 << index) & n) >> index);
}
/**
  * flip_bits - to flip a cetain bit
  * @n: the number
  * @m: then bit
  * Return: 1 if true or -1 if false
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int z = 0;

	for (i = 0; i < 64; ++i)
	{
		if (get_bit(n, i) != get_bit(m, i))
			z++;
	}
	return (z);
}
