#include "main.h"

/**
 * factorial - entry point
 * @n: variable
 * Return: different value depending n value
 */

int factorial(int n)

{
	int res = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 0)
	{
	return (n * factorial(n - 1));
	return (res);
	}
	return (0);
}


