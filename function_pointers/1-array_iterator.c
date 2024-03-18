#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - entry point
 * @array: pointeur vers un tableau
 * @size: la taille du tableau
 * @action: pointeur de la fonction
 * Description: this function executes an action on the tab elements.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i = 0;

	if (array == NULL)
	{
		return;
	}

	for (i = 0 ; i <= (size - 1) ; i++)
	{
		action(array[i]);

	}
}
