#include "lists.h"

/**
 * dlistint_len - function that returns the n elements in a double linked list
 * @h: head of the linked list
 * Return: pointer to the head of the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
