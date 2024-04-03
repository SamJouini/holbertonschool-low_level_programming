#include "lists.h"
#include <stdlib.h>

/**
 * *add_dnodeint_end - adding a new node at the end of a double linked list
 * @head: head of the linked list
 * @n: value of the new node
 * Return: pointer to the head of the list or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;
	new->prev = last;

	return (new);
}
