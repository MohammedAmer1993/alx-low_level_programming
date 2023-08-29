#include <stdio.h>
/**
  * print_diagsums - print the sum of diagonals
  * @a: pointer to int
  * @size: size of matrix
  * Return: nothing void func
  */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size * size)
	{
		sum1 = sum1 + a[i + j];
		++j;
		i += size;
	}
	i = 0;
	j = size - 1;
	while (i < size * size)
	{
		sum2 = sum2 + a[i + j];
		--j;
		i += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
