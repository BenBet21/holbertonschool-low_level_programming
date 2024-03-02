#include "main.h"

/**
 * _strncat  - entry point
 * @dest: variable (s1)
 * @src: variable (s2) ne change jamais
 * @n : variable definie la lettre à prendre dans src (s2)
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}

