#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: variable
 * Return: different values
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b);
	if (x == 0)
		exit(98);
	return (x);

}



