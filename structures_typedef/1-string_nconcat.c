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
		i++;
	return (i);
}

/**
 * string_nconcat - entry point
 * @s1: first sentence to concatenate
 * @s2: second sentence to concatenate depends of value of n
 * @n: variable to indicate the number of s2 bytes ton concatenate
 * Return: different values
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *concatenate;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = taille(s1);
	size2 = taille(s2);


	if (n >= size2)
		concatenate = malloc((size1 + size2 + 1) * sizeof(char));
	if (n < size2)
		concatenate = malloc((size1 + n + 1) * sizeof(char));
	if (concatenate == NULL)
		return (NULL);
	for (i = 0 ; i < size1 ; i++)
		concatenate[i] = s1[i];
	for (i = 0; i < n && i < size2 ; i++)
		concatenate[size1 + i] = s2[i];
	concatenate[size1 + i] = '\0';
	return (concatenate);
}
