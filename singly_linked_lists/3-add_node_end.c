#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: Pointer to the pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 * Return: Address of the new element, or NULL if it failed
 * Description:
 * This function adds a new node containing a copy of the string str
 * at the end of the list. It takes a pointer to the pointer to the
 * head of the list (head) and a pointer to the string to be stored (str).
 * It returns the address of the new element if successful, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node = malloc(sizeof(list_t));
	int compteur;
	list_t *temp;

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

	new_node->len = compteur + 1;

	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
