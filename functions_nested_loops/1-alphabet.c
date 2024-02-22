#include "main.h"

/**
 * print_alphabet - Entry point
 *
 */

void print_alphabet(void)
{
	char n;

	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
