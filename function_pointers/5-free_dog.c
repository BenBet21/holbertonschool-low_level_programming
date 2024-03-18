#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - entry point
 * @d: membre
 * Return: value of free_dog
 * Description: this function free dogs
 */

void free_dog(dog_t *d)
{

if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
