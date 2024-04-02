#include "lists.h"

/**
 * add_node - addition of a new node at the beginning of a linked list
 * @head: head of the linked list
 * @str: string to duplicate
 * Return: pointer to the head of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL || head == NULL)
	{
		free(temp);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
