#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
 * add_node - addition of a new node at the beginning of a linked list
 * @head: head of the linked list
 * @str: string to duplicate
 * Return: pointer to the head of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dupe;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	dupe = strdup(str);

	if (dupe == NULL || head == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = dupe;
	new->len = _strlen(dupe);
	new->next = *head;
	*head = new;
	return (new);
}
