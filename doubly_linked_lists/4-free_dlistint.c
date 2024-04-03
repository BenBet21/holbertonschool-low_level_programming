#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - this function frees a dlistint_t list.
 * @head: pointer to a pointer to the head of the list
 * No return because its a function with void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actuel;

	while (head)
	{
		actuel = head;
		head = head->next;
		free(actuel);
	}
}
