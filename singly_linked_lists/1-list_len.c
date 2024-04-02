#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: pointer to the head of the list
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
