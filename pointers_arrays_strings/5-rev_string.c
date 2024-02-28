#include "main.h"

/**
 * rev_string - entry point
 * @s: number to be verify
 */

void rev_string(char *s)

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
