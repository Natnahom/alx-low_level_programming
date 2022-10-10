#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: from dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
