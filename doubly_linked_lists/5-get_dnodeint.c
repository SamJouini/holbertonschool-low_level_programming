#include "lists.h"

/**
 * *get_dnodeint_at_index - the nth node of a double linked list
 * @head:
 * @index: 
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
	head = head->next;
	i++;
	}

	if (i == index)
	{
		return (head);
	}
	else
	return (NULL);
}