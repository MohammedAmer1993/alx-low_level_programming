#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: alaways 0 (success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		putchar(48 + i);
	putchar(10);
	return (0);
}
