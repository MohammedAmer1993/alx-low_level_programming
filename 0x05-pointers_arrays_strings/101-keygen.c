#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  * Return: alaways 0 (success)
  */
int main(void)
{
	srand(time(NULL));
	printf("%d", rand());
	return (0);
}
