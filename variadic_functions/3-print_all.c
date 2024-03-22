#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - entry point
 * @format: list argument  passed to the function
 * @...: variadic arguments representing the data to be printed based on format
 * Description: this function prints anything
 */

void print_all(const char * const format, ...)
{
	char *string;
	unsigned int index = 0;
	va_list args;
	int is_format_char;

	va_start(args, format);
	while (format && format[index] != '\0')
	{
		is_format_char = 1;

		if (format[index] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[index] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[index] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[index] == 's')
		{
			string = va_arg(args, char*);
			if (!string)
				printf("(nil)");
			else
				printf("%s", string);
		}
		else
			is_format_char = 0;

	if (format[index + 1] && is_format_char)
		printf(", ");
	index++;
	}

	printf("\n");
	va_end(args);
}
