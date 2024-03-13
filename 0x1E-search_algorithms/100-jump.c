#include "search_algos.h"
#include <math.h>

/**
  * jump_search - implment jump search
  * @array: the array
  * @size: size of array
  * @value: the value to look for
  * Return: the index of value
  */
int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t low = 0;
	size_t high = low + m;

	if (!array)
		return (-1);
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low = high;
		high = high + m;
	}
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	if (high > size)
	{
		while (low < size)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			++low;
		}
	}
	else
	{
		while (low <= high)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			++low;
		}
	}
	return (-1);
}
