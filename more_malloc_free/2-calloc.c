#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: le nombre d'éléments du tableau à allouer
 * @size: la taille en octets de chaque élement du tableau
 * Return: Null if _calloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *newtab;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newtab = malloc(nmemb * size);

	if (newtab == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		newtab[i] = 0;

	return (newtab);
}
