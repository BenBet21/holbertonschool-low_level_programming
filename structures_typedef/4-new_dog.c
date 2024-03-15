#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - entry point
 * @name: membre
 * @age: membre
 * @owner: membre
 * Return: value of new_dog
 * Description: this function copy two variable of type struc dog
 * with the provided parameters: name, age, owner.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;

	dog_t *new_dog_creation = malloc(sizeof(dog_t));

	if (new_dog_creation == NULL)
	{
		return (NULL);
	}
	new_dog_creation->name = malloc(strlen(name) + 1);
	if (new_dog_creation->name == NULL)
	{
		free(new_dog_creation);
		return (NULL);
	}

	for (i = 0; name[i] != '\0' ; i++)
	{
		new_dog_creation->name[i] = name[i];
	}
	new_dog_creation->name[i] = '\0';


	new_dog_creation->owner = malloc(strlen(owner) + 1);
	if (new_dog_creation->owner == NULL)
	{
		free(new_dog_creation->name);
		free(new_dog_creation);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0' ; i++)
	{
		new_dog_creation->owner[i] = owner[i];
	}
	new_dog_creation->owner[i] = '\0';

	new_dog_creation->age = age;

	return (new_dog_creation);
}
