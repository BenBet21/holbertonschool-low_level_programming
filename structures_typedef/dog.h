#ifndef DOG_H
#define DOG_H

/**
 * struct dog -structure nommée dog
 * @name: membre de la structure de type char *
 * @age: membre de la structure de type float
 * @owner: membre de la structure de type char *
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
