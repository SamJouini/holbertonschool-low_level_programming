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
	int j = _strlen(s1);
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	str = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
