#include "dog.h"
/**
  * init_dog - struct dog initialization
  * @d: pointer to struct
  * @name: name to give to namer member of struct
  * @age: initial age
  * @owner: initial owner
  * Return: nothing (void)
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
