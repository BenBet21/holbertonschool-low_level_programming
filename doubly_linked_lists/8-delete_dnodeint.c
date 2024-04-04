#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - this function deletes the node
 * at a the index position
 * @head: a pointer to a pointer to the head of the list
 * @index: unsigned integer is the index of the list
 * where the new node should be deleted
 * Return: 1 if it succeeded, -1 it it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *prev_node = NULL;
	dlistint_t *next_node = NULL;

	if (*head == NULL || index == 0)
		return (-1);

	while (index > 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}

	prev_node = temp->prev;
	next_node = temp->next;

	if (prev_node != NULL)
		prev_node->next = next_node;

	if (next_node != NULL)
		next_node->prev = prev_node;

	if (temp == *head)
		*head = next_node;

	free(temp);
	return (1);
}
