#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * @n: variatic variable
 * Return: value of sum
 * Description: this function sums them all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int value;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);

	return (sum);
}
