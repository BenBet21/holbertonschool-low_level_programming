#include "main.h"

/**
 * flip_bits - Returns the number of bits needed
 * to flip to get from one number to another
 * @n: Premier nombre
 * @m: Deuxième nombre
 * Return: Le nombre de bits à retourner pour passer d'un nombre à un autre.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

