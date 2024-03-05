#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: variable
 * @size : taille de la matrice carré
 */

void print_diagsums(int *a, int size)

{
	unsigned int somme1, somme2;
	int i, nbcase;
	nbcase = 0;
	somme1 = 0;
	somme2 = 0;

	nbcase = (size * size) - 1;

	for (i = 0 ; i <= nbcase ; i = i + (size + 1))
	{
		somme1 = somme1 + a[i];
	}

	for (i = (size - 1) ; i < nbcase ; i = i + (size - 1))
	{
		somme2 = somme2 + a[i];
	}

	printf("%d, %d\n", somme1, somme2);

}
