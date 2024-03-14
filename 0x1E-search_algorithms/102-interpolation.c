#include "search_algos.h"

/**
  * formula - the interpolation formala
  * @low: the low index
  * @high: the high index
  * @low_val: the value of low index
  * @high_val: the value of high index
  * @val: the value to be found
  * Return: the index int
  */

int formula(size_t low, size_t high, int low_val, int high_val, int val)
{
	size_t pos = 0;

	pos = low + (((high - low) * (val - low_val)) / (high_val - low_val));
	return (pos);
}

/**
  * interpolation_search - function to performe interpolation search over array
  * @array: the array
  * @size: size of array
  * @value: the value to look for
  * Return: intger the index
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t index = 0;

	while (low < high)
	{
		index = formula(low, high, array[low], array[high], value);
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		else if (array[index] > value)
		{
			high = index;
		}
		else if (array[index] < value)
		{
			low = index;
		}
		printf("index is %ld\n", index);
		while (index != low && index > low)
		{
			printf("index is %ld\n", index);
			if (array[index] == array[index - 1])
			{
				--index;
			}
			else
			{
				break;
			}
		}
	}
	return (-1);
}
