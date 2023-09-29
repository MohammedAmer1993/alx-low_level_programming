#include "main.h"
/**
  * get_endianness - know the endianness of cpu
  * Return: 1 if little endian, 0 if big endian
  */
int get_endianness(void)
{
	unsigned int x = 0xaabbccdd;
	unsigned char y = (unsigned char) x;

	if (y == 0xdd)
		return (1);
	else
		return (0);
}
