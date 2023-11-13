#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - function that initialize a variable of type.
 * @d: a new type.
 * @name: type char *
 * @age: type float
 * @owner: type char *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
