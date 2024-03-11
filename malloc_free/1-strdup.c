#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return a pointer to an allocated space memory
 * @str: string given as a parameter
 * Return: to a pointer to the duplicated string if else null
 */

char *_strdup(char *str)
{
	size_t i;
	char *dupe = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= strlen(str); i++)
	{
		dupe[i] = str[i];

	}
	return (dupe);
}
