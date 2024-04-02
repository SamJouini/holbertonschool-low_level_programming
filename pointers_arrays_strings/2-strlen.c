#include "main.h"

/**
 * _strlen - return the length of a string
 * @s : string to mesure
 * Return: I, the index
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
