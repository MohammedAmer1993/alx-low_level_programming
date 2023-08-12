#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: alaways 0 (success)
  */
int main(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; ++i)
		putchar(c++);
	putchar(10);
	return (0);
}
