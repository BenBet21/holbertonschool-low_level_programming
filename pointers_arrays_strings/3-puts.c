#include "main.h"

/**
 * _puts - entry point
 * @str: number to be verify
 */

void _puts(char *str)

{
	int a = 0;

	for (a = 0 ; a <= 63 ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
