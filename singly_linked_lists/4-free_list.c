#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - this function frees a list_t list.
 * @head: pointer to a pointer to the head of the list
 * No return because its a function with void
 */

void free_list(list_t *head)
{
	list_t *actuel;

	while (head)
	{
		actuel = head;
		head = head->next;
		free(actuel->str);
		free(actuel);
	}
}
