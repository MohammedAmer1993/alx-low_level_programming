#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: alaways 0 (success)
  */
int main(void)
{
	char c = 96;
	int i;

	for (i = 0; i < 26; ++i)
	{
		++c;
		if (c == 'e' || c == 'q')
			continue;
		printf("%c", c);
	}
	printf("\n");
	return (0);
}
