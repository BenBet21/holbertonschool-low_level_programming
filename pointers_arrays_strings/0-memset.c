#include "main.h"
/**
 * *_memset - check the code
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i = 0;

	for ( ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
