#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Function that creates a new dog.
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{

		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newdog->name = malloc(strlen(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);

	newdog->age = age;

	newdog->owner = malloc(strlen(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);

		return (NULL);
	}
	strcpy(newdog->owner, owner);
	return (newdog);
}

