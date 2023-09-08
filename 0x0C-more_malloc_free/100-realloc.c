#include <stdlib.h>
#include <errno.h>
/**
  * _realloc - reallocat prev allocated mem to new size
  * @ptr: address of previously allocated mem
  * @old_size: old memory size
  * @new_size: new memory size;
  * Return: pointer to newly allocated mem
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	void *tmp;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (0L);
		return (ptr);
	}
	if (!new_size)
	{
		free(ptr);
		return (0L);
	}
	tmp = malloc(new_size);
	if (!tmp)
	{
		return (0L);
	}
	size = new_size > old_size ? new_size : old_size;
	for (i = 0; i < size; ++i)
		((char *)tmp)[i] = ((char *)ptr)[i];
	free(ptr);
	return (tmp);
}
