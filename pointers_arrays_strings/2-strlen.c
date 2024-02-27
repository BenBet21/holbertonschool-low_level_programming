#include "main.h"

/**
 * _strlen - entry point
 * @s: number to be verify
 * Return: always 0
 */

int _strlen(char *s)

{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	return (a);

}
