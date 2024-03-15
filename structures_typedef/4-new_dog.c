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
	dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}
	new_dog_ptr->name = (char *)malloc(strlen(name) + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;

	return (new_dog_ptr);

	return (NULL);
}
