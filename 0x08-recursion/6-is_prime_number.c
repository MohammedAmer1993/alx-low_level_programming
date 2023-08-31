#include "main.h"
/**
  * is_prime_number - find if a number is a prime
  * @n: the number
  * Return: 1 if a prime , 0 if not
  */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	if (n < 0)
		return (0);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	return (1);
}
