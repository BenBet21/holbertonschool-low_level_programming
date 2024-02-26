#include "main.h"

/**
 * print_diagonal - entry point
 * @n: character to be verify
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 1 ; y <= x ; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
