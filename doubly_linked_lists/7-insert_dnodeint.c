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
 * *insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added.
 * @n: value to be stored in the new node.
 * Return: the adress of the new node or NULL if failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *nextNode, *prevNode;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}

	prevNode = get_dnodeint_at_index(*h, idx - 1);
	if (prevNode == NULL)
	{
		return (NULL);
	}
	nextNode = prevNode->next;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = nextNode;
	newNode->prev = prevNode;

	if (nextNode != NULL)
	{
		nextNode->prev = newNode;
	}
	prevNode->next = newNode;

	return (newNode);
}
