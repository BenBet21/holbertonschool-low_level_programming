#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
*/

void print_alphabet_x10(void)
{
	char n;
	int x = 1;

	while (x <= 10)
	{
	for (n = 97 ; n <= 122 ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	x++;
	}

}
