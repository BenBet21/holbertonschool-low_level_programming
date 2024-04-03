#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Prints the number of nodes in a linked dlistint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
	number++;
	h = h->next;
	}
	return (number);
}
