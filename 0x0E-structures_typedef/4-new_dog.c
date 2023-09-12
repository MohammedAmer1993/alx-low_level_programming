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
	char *cp_name;
	char *cp_owner;

	if (!name)
		cp_name = "";
	else
		cp_name = name;
	if (!owner)
		cp_owner = "";
	else
		cp_owner = owner;
	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (0L);
	d->name = malloc(strlen(cp_name) + 1);
	if (!(d->name))
	{
		free(d);
		return (0L);
	}
	d->name = cp_name;
	d->age = age;
	d->owner = malloc(strlen(cp_owner) + 1);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (0L);
	}
	d->owner = cp_owner;
	return (d);
}
