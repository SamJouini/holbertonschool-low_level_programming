#include "lists.h"
#include <stdlib.h>

/**
 * *insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added.
 * @n: value to be stored in the new node.
 * Return: the adress of the new node or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new; dlistint_t *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}

	current = *h;
	for (i = 0; i < idx - 1 && current->next != NULL; i++)
	{
		current = current->next;
	}

	if (i == idx - 1)
	{
		new->prev = current;
		new->next = current->next;

		if (current->next != NULL)
		{
			current->next->prev = new;
			current->next = new;
			return (new);
		}
	}

	free(new);
	return (NULL);
}
