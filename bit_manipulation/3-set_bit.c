#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointeur vers un nombre unsigned long int.
 * @index: Index du bit à définir à 1.
 * Return: 1 si cela a fonctionné, ou -1 en cas d'erreur.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}

