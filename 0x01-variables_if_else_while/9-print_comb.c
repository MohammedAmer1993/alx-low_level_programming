#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: alaways 0 (success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 9; ++i)
	{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
