#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: variable
 * @c: variable
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
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



