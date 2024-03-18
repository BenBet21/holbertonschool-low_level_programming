#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - entry point
 * @name: chaine de caractere contenant le nom
 * @f: pointeur de la fonction
 * Description: this function prints with the provided parameter.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
