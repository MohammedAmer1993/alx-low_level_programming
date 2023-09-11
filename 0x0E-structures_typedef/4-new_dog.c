#include "dog.h"
#include <stdlib.h>
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
	d->name = cp_name;
	d->age = age;
	d->owner = cp_owner;
	return (d);
}
