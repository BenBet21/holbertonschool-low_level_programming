#include "main.h"
#include <stdio.h>

/**
 * reverse_array - entry point
 * @a: variable chaine de caractère
 * @n: variable chaine de caractère
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int temp;

	while (i != n - 1)
	{
		i++;
	}
	while (i > j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i--;
		j++;
	}
}
