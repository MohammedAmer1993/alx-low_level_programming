#include <stdlib.h>
/**
  * _calloc - allocates memory
  * @nmemb: number of elments
  * @size: size of element
  * Return: address of allocated mem
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;
	int tot_size = nmemb * size;

	if (!tot_size)
		return (0L);
	ptr = malloc(tot_size);
	if (!ptr)
		return (0L);
	for (i = 0; i < tot_size; ++i)
		((char *)ptr)[i] = 0;
	return (ptr);
}
