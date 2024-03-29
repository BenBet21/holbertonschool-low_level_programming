#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dog - entry point
 * @d: nom de la structure
 * Description: this function print a variable of type struc dog
 * with the provided parameters: name, age, owner.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: (nil)\nAge: %.6f\nOwner: (nil)\n", d->age);
	}

	else if (d->name == NULL)
	{
		printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	}
	else if (d->owner == NULL)
	{
		printf("Name: %s\nAge :%.6f\nOwner :(nil)\n", d->name, d->age);
	}
	else
	{
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
