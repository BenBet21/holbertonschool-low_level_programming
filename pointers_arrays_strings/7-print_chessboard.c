#include "main.h"

/**
 * print_chessboard - entry point
 * @a: variable
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])

{
	int i, j;
	int k = 0;

	while (*a[k])
	{
		k++;
	}

	for (i = 0 ; i < k - 1 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{

		if (a[i][j] >= 65 && a[i][j] <= 90)
		{
			_putchar(a[i][j]);
		}
		if (a[i][j] >= 97 && a[i][j] <= 122)
		{
			_putchar(a[i][j]);
		}
		}
		_putchar('\n');
	}

}
