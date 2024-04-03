#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that free a double linked list
 * @head: head of the linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
