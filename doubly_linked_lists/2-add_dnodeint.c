#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adding a new node at the beginning of a doubly linked list
 * @head: head of the linked list
 * @n: value of the new node
 * Return: pointer to the head of the list or NULL if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		*head->prev = NULL;
	}

	*head = new;
	return (new);
}
