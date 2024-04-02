#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be included in the new node.
 *
 * Return: Address of the new node, or NULL if failed to allocate memory.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int compteur;

	if (str == NULL)
	return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (compteur = 0 ; str[compteur] != '\0'  ; compteur++)

	new_node->len = compteur;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
