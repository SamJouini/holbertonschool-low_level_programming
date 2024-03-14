#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a sting
 * @s : string
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
 * _strdup - return a pointer to an allocated space memory
 * @str: string given as a parameter
 * Return: to a pointer to the duplicated string if else null
 */

char *_strdup(char *str)
{
	int i;
	char *dupe;

	if (str == NULL)
	{
		return (NULL);
	}

	dupe = malloc((_strlen(str) + 1) * sizeof(char));

	if (dupe == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= _strlen(str); i++)
	{
		dupe[i] = str[i];

	}
	return (dupe);
}
