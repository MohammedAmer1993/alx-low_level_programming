#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
  * new_dog - allocating mem for new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: pointer to dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;
	char *cp_name = name;
	char *cp_owner = owner;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (0L);
	d->name = strdup(name);
	if (!(d->name))
	{
		free(d);
		return (0L);
	}
	d->age = age;
	d->owner = strdup(owner);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (0L);
	}
	return (d);
}
