#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  * Return: alaways 0 (success)
  */
int main(void)
{
	int i;

	srand(time(NULL));
	for (i = 0; i < 4; ++i)
		printf("%d", rand() % 10000);
	return (0);
}
