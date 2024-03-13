#include "search_algos.h"

/**
  * binary_search - function to performe linear search over array
  * @array: the array
  * @size: size of array
  * @value: the value to look for
  * Return: intger the index
  */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t stop = size - 1;
	size_t middle = 0;
	size_t i;

	if (!array)
	{
		return (-1);
	}

	while (start < stop)
	{
		middle = (start + stop) / 2;
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= stop; ++i)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] > value)
		{
			stop = middle - 1;
		}
		else if (array[middle] < value)
		{
			start = middle + 1;
		}
	}
	return (-1);
}
