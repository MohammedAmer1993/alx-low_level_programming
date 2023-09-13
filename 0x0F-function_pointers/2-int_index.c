#include "function_pointers.h"
/**
  * int_index - search for an int
  * @array: the array of int
  * @size: size of array
  * @cmp: pointer to mechanism
  * Return: the index of elemnt
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
