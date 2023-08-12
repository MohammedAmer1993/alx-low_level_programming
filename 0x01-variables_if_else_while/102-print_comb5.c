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
	int l;
	int k;

	for (i = 0; i < 10; ++i)
	{
		for (j = i; j < 10; ++j)
		{
			for (l = j; l < 10; ++l)
			{
				for (k = l; k < 10; ++k)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + l);
					putchar(48 + k);
					if (i == 9 && j == 9 && l == 8 && k == 9)
						continue;
					putchar(',');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
