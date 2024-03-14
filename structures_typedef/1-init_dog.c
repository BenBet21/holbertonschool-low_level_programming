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
 * Description: this function initialize a variable of type struc dog
 * with the provided parameters: name, age, owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
