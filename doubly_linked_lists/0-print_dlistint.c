#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints the number of nodes a list_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
	printf("%d\n", h->n);
	number++;
	h = h->next;
	}
	return (number);
}
