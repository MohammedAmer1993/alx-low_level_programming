#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: alaways 0 (success)
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
