#include "search_algos.h"

/**
  * linear_search - function to performe linear search over array
  * @array: the array
  * @size: size of array
  * @value: the value to look for
  * Return: intger the index
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		++i;
	}
	return (-1);
}
