#include "lists.h"

/**
 * sum_dlistint - he sum of all the n of a double linked list.
 * @head: a pointer to the head of the linked list
 * Return: the sum of n or O if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
