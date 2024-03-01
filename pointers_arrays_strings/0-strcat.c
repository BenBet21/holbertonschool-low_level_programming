#include "main.h"

/**
 * _strcat  - entry point
 * @dest: variable
 * @src: variable
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}

