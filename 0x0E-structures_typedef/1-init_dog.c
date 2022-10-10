#include "main.h"

/**
 * init_dog - initializes
 * @dog: structure
 * @d: structure
 * @name: character
 * @age: float
 * @owner: character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
