#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - this function returns the nth node
 * of a dlistint_t linked list.
 * @head: a pointer to the head of the list
 * @index: Index to the node to return
 * Return: pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *courant = head;
	unsigned int compteur = 0;

	if (head == NULL)
		return (NULL);

	while (courant != NULL)
	{
		compteur++;
		courant = courant->next;
	}

	if (index == 0 || index >= compteur)
		return (NULL);

	courant = head;
	compteur = 0;

	while (compteur < index && courant != NULL)
	{
		courant = courant->next;
		compteur++;
	}
	return (courant);
}
