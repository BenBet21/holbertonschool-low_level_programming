#include "main.h"
/**
 * is_prime_recursive - Check if a number is prime using recursion.
 * @nb: The number to be checked.
 * @div: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_recursive(int nb, int div)
{
	if (nb <= 1)
	{
		return (0);
	}
	if (div == 1)
	{
		return (1);
	}
	if (nb % div == 0)
	{
		return (0);
	}
	return (is_prime_recursive(nb, div - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @nb: The number to be checked.
 *
 * Return: 1 if nb is prime, 0 otherwise.
 */

int is_prime_number(int nb)
{
	return (is_prime_recursive(nb, nb - 1));
}
