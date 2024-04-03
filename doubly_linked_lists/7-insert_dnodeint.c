#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - this function inserts a new node
 * at a given position
 * @h: a pointer to a pointer to the head of the list
 * @idx: unsigned integer is the indes of the list
 * where the new node should be added
 * @n: integer value inside
 * Return: sum of all date
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *nouveau;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	nouveau = malloc(sizeof(dlistint_t));

	if (nouveau == NULL)
		return (NULL);

	nouveau->n = n;
	nouveau->prev = temp;
	nouveau->next = temp->next;
	temp->next->prev = nouveau;
	temp->next = nouveau;

	return (nouveau);
}
