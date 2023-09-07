#include <stdlib.h>
/**
  * malloc_checked - allocate and check mem
  * @b: var for alloc
  * Return: void pointer and set status to 98 if couldn't
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (!ptr)
		_Exit(98);
	else
		return (ptr);
}
