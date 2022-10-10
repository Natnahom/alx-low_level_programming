#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int new, old, i;
	struct dog *newdog = NULL;

	new = 0;
	while (name[new] != '\0')
		new++;
	old = 0;
	while (owner[old] != '\0')
		old++;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{	
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(new + 1);
	if (newdog == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(old + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= new; i++)
		newdog->name[i] = name[i];
	for (i = 0; i <= old; i++)
		newdog->owner[i] = owner[i];
	newdog->age = age;
	return (newdog);
}
