#include "main.h"

/**
 * swap_int - entry point
 * @b: number to be verify
 * @a: number to be verify
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
