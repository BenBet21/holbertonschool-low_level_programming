#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: character to be verify the absolue value
 *
 * Return: absolue value of n
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
	n = -n;
	}
	_putchar('0' + n);
	return (n);
}
