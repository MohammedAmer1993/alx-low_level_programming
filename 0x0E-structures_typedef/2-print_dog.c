#include <stdio.h>
#include "dog.h"
/**
  *print_dog - print the dog data
  * @d: the dog
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == 0L)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0L)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
