#include "lists.h"
#include <stdlib.h>

/**
 * *get_dnodeint_at_index - the nth node of a double linked list
 * @head: head of the linked list
 * @index: index of the node
 * Return: the node or NULL if not existing
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

/**
 * delete_dnodeint_at_index - deletes the node at an index
 * @head: pointer to the head of the linked list
 * @index: index to the node that have to be detect
 * Return: 1 if successful or -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = get_dnodeint_at_index(*head, index);

	if (current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else if (current->next == NULL)
	{
		current->prev->next = NULL;
	}
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	free(current);

	return (1);

}
