#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * return 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int tmp;

	tmp = n % 10;
	if (tmp > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, tmp);
	else if (tmp == 0)
		ptintf("Last digit of %d is %d and is 0\n", n, tmp);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
	return (0);
}
