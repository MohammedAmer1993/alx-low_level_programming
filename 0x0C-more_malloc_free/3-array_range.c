#include <stdlib.h>
/**
  * array_range - create array of num between 2 num sorted
  * @min: the min number
  * @max: the max number
  * Return: pointer to int the frist number of array
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (0L);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (!ptr)
		return (0L);
	for (i = 0; i < size; ++i)
		ptr[i] = min + i;
	return (ptr);
}
