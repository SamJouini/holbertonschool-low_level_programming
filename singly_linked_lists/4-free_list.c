#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that free a linked list
 * @head: head of the linked list
*/

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
