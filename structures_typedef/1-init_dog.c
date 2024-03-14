#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - entry point
 * @d: nom de la structure
 * @name: membre de d
 * @age: membre de d
 * @owner: membre de d
 * Return: NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || age == 0 || owner == NULL)
		return;

	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
		return;
	strcpy(d->name, name);

	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
		return;
	strcpy(d->owner, owner);

	d->age = age;
}


