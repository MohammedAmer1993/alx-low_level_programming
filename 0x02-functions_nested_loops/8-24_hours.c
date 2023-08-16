#include "_putchar.h"

/**
  * jack_bauer - print time
  *
  * Return: nothing (void func)
  */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int z;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (i == 2 && j == 4)
				break;
			for (k = 0; k < 6; ++k)
			{
				for (z = 0; z < 10; ++z)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
			}
		}
	}
}
