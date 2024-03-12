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
 * *str_concat - entry point
 * @s1: variable
 * @s2: variable
 * Return: different values
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i;
	int size1;
	int size2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	size1 = taille(s1);
	size2 = taille(s2);

	concat = malloc((size1 + size2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size1 ; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0 ; i < size2; i++)
	{
		concat[size1 + i] = s2[i];
	}
	concat[size1 + size2] = '\0';

	return (concat);
}
