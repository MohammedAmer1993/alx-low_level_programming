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
	int k;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			for (k = j + 1; k < 10; ++k)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
