#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: value de min
 * @max: value de max
 * Return: Null if malloc fails
 */

int *array_range(int min, int max)

{

	int *tab;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tab = malloc(size * sizeof(int));

	if (tab == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		tab[i] = min + i;

	return (tab);
}
