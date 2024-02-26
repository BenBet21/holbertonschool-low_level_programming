#include "main.h"

/**
 * more_numbers - Entry point
 *
 */

void more_numbers(void)
{
	int c, i = 0;

	for (c = 0 ; c < 10 ; c++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			}

		if (c <= 9)
			_putchar('\n');

	}
}
