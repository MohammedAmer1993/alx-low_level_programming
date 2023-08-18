#include <stdio.h>
/**
  * main - entry point
  * Return: alaways 0 (success)
  */
int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i < 101; ++i)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
