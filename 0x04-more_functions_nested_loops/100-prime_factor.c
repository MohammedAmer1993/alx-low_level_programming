#include <stdio.h>
/**
  * main - Entry point
  * Return: alaways 0 (success)
  */
int main(void)
{
	long int num = 612852475143;
	int i;
	int lar = 0;

	while (num % 7 == 0)
		num = num / 7;
	while (num % 5 == 0)
		num = num / 5;
	while (num % 3 == 0)
		num = num / 3;
	while (num % 2 == 0)
		num = num / 2;
	for (i = 1; i <= num; ++i)
	{
		if (num % i == 0)
		{
			if (num / i == 1 && i > lar)
				lar = i;
			else
				num = num / i;
		}
	}
	printf("%d\n", lar);
	return (0);
}
