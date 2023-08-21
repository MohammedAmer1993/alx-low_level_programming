#include <stdio.h>
/**
  * print_array - print the elements of array
  * @a: pointer to frist element of array
  * @n: size of arry
  * Return: Nothing (void)
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d, ", a[i]);
		if (i == n - 1)
			printf("%d\n", a[i]);
	}
}
