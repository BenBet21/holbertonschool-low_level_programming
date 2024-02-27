#include "main.h"

/**
 * _puts - entry point
 * @str: number to be verify
 */

void _puts(char *str)

{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
