#include "main.h"

/**
 * print_rev - entry point
 * @s: number to be verify
 */

void print_rev(char *s)

{
	int a;

	for (a = (*s - 7) ; a >= -1 ; --a)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
