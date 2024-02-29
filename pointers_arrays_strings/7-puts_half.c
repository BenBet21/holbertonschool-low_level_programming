#include "main.h"

/**
 * puts_half  - entry point
 * @str: designe la chaine de caractères
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
	{
		len++;
	}


	if (len % 2 == 0)
	{
		for (i = len / 2 ; i < len ; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = (len - 1) / 2 ; i < len ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
