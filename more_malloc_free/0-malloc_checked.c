#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: variable
 */

void *malloc_checked(unsigned int b)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(c));
	if (str == 0)
	{
	return (NULL);
	}
	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	str[size] = '\0';
	return (str);

}



