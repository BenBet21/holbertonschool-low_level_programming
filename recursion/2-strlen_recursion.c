#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: variable
 * Return: 0 fail 1 true
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}


