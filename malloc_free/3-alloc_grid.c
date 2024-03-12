#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - entry point
 * @width: variable
 * @height: variable
 * Return: different values
 */

int **alloc_grid(int width, int height)
{
	int **array2dim;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2dim = malloc(height * sizeof(int *));
	if (array2dim == 0)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		array2dim[i] = malloc(width * sizeof(int));
		if (array2dim[i] == 0)
		{
			for (; i >= 0 ; i--)
			{
				free(array2dim[i]);
			}
			free(array2dim);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			array2dim[i][j] = 0;
		}
	}

	return (array2dim);
}
