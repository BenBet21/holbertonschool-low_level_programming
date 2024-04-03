#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  add_dnodeint- Prints the number of nodes in a linked dlistint_t list.
 * @head: double pointerbto the head of the list
 * @n: Integer value to be stored in the new node
 * Return: The number of nodes
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
	(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
