#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free the mom of dog
  * @d: the strct
  * Return: nothing (void)
  */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
