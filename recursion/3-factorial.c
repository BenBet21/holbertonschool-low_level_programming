#include "main.h"

/**
 * factorial - entry point
 * @n: variable
 * Return: different value depending n value
 */

int factorial(int n)

{
	int i = 1;
	int res = 1;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 0)
	{
		while (i < n)
		{
			res = res * i;
			i++;
		}
		return (res);
	}
	return (0);
}


