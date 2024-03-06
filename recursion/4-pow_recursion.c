#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: variable
 * @y: variable
 * Return: different value depending n value
 */

int _pow_recursion(int x, int y)

{
	int res = 1;

	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	if (y >= 0)
	{
	return (x * (_pow_recursion(x, (y - 1))));
	return (res);
	}
	return (0);
}


