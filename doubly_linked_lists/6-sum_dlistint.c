#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - this function sums all the date (n)
 * of a dlistint_t linked list.
 * @head: a pointer to the head of the list
 * Return: sum of all date
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int somme = 0;

	while (head != NULL)
	{
		somme += head->n;
		head = head->next;
	}
	return (somme);
}
