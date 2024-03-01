#include "main.h"

/**
 * puts2 - entry point
 * @str: designe la chaine de caractères
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
	{
		len++;
	}


	for (i = 0 ; i < len - 1 ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
