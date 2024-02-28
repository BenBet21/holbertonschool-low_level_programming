#include "main.h"

/**
 * rev_string - entry point
 * @s: number to be verify
 */

void rev_string(char *s)

{
	int a;
	int b;
	int c;

	c = 0;
	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0 ; b <= a / 2 ; b++)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
