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
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
