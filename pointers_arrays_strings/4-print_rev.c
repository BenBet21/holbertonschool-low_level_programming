#include "main.h"

/**
 * print_rev - entry point
 * @s: number to be verify
 */

void print_rev(char *s)

{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
