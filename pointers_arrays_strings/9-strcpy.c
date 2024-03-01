#include "main.h"
#include "stdio.h"
/**
 * _strcpy  - entry point
 * @dest: variable
 * @src: variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *depart = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (depart);

}

