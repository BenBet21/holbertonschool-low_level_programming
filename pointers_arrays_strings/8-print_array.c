#include "main.h"
#include "stdio.h"
/**
 * print_array  - entry point
 * @n: nombre de case du tableau à afficher
 * @a: est le tableau contenant les données à afficher
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d , ", a[i]);
		}
	}
}
