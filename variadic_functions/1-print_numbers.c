#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - entry point
 * @separator: chaine de caractères constante
 * @n: is the number of integers passed to the function
 * Description: this function prints numbers and separators
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, unsigned int));
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
