#include "main.h"

/**
  * clear_bit - to clear a certain bit
  * @n: the number
  * @index: the bit
  * Return: 1 if true -1 if false
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 << index)) & *n;
	return (1);
}
