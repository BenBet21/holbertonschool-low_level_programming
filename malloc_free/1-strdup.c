#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * taille - entry point
 * @str: variable
 * Return: NULL ou taille de STR
 */


int taille(char *str)
{
	int i = 0;

	while (str[i])
	{
	i++;
	}
	return (i);
}

/**
 * *_strdup - entry point
 * @str: variable
 * Return: different values
 */

char *_strdup(char *str)
{
	char *copie;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = taille(str);

	copie = malloc((size + 1) * sizeof(*str));

	if (copie == NULL)
	{
	return (NULL);
	}

	for (i = 0 ; i <= size ; i++)
	{
		copie[i] = str[i];
	}

	return (copie);
}



