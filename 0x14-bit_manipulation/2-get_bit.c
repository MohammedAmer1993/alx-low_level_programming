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
