#include "function_pointers.h"
/**
  * array_iterator - iterate on array and choose func
  * @array: the array
  * @size: size of array
  * @action: the func to be called
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
