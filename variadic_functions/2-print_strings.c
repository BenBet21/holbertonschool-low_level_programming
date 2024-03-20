#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: chaine de caractères constante
 * @n: is the number of integers passed to the function
 * Description: this function prints numbers and separators
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	char *caractere;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		caractere = va_arg(args, char *);

		if (caractere == NULL)
			printf("(nil)");
		else
			printf("%s", caractere);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
