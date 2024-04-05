#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int resultat = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

	resultat = (resultat << 1) | (b[index] - '0');
	index++;
	}

	return (resultat);
}

