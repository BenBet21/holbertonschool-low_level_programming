#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointeur vers un nombre unsigned long int.
 * @index: Index du bit à définir à 0.
 * Return: 1 si cela a fonctionné, ou -1 en cas d'erreur.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}

