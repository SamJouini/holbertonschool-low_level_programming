#include "lists.h"

/**
 * add_node - addition of a new node at the beginning of a linked list
 * @head: head of the linked list
 * @str: string to duplicate
 * Return: pointer to the head of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL || head == NULL)
	{
		free(new);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
