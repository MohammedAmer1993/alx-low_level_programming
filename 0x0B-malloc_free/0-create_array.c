#include <stdlib.h>
/**
  * create_array - creates an array in heap
  * @size: size of array
  * @c: the char to full the arry
  * Return: char pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (!size)
		return (0L);
	ptr = (char *) malloc(size);
	if (!ptr)
		return (0L);
	for (i = 0; i < size; ++i)
		ptr[i] = c;
	return (ptr);
}
