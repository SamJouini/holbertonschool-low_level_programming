#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints the elements of a linked list
 * @h: head of the  linked list
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return (n);
}
