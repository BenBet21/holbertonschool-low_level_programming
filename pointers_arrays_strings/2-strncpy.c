#include "main.h"

/**
 * _strncpy  - entry point
 * @dest: variable
 * @src: variable
 * @n: variable definie
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';

	}
		return (dest);
}
