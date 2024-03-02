#include "main.h"

/**
 * _strcmp  - entry point
 * @s1: variable chaine de caractère
 * @s2: variable chaine de caractère
 * Return: la différence entre s1 et s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	}
		return (0);
}
