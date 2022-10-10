#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: character
 * @age: float
 * @owner: character
 * Return: doggy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int new, old, i;
	dog_t *doggy;

	new = old = 0;
	while (name[new++])
		;
	while (owner[old++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(new * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < new; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(old * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < old; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
