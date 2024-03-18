#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - entry point
 * @array: pointeur vers un tableau
 * @size: the number of elements int the array
 * @cmp: pointeur de la fonction
 * Description: this function searchs integer
 * and return the first occurency of this integer
 * Return: value of int_index;
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}


	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)

		{
			return (i);
		}

	}
	return (-1);
}
