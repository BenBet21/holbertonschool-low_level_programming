#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a liked list_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		if (h->str == NULL)
			return (1);

		number++;
		h = h->next;
	}
	return (number);
}
