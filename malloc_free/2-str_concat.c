#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a sting
 * @s: string
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	if (s== NULL)
	{
		return (0);
	}

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: null on failure or resulting string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *str;

	str = malloc(((_strlen(s1) + _strlen(s2)) + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(s1); i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < _strlen(s2); j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = '\0';

	return (str);
}
