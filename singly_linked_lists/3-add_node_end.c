#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * _strlen - return the lenght of a string
 * @s : string to mesure
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * add_node_end - addition of a new node at the end of a linked list
 * @head: head of the linked list
 * @str: string to duplicate
 * Return: pointer to the head of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new; 
	list_t *last;
	char* dupe;

	if (str == NULL)
	{
		return (NULL);
	}

	dupe = strdup(str);

	if (dupe == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free (new);
		return (NULL);
	}

	new->str = dupe;
	new->len = _strlen(dupe);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	
	last->next = new;

	return (new);
}
