#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a sting
 * @s : string
 * Return: i
 */

unsigned int _strlen(char *s)
{
	int i;

	i = 0;

	if (s == NULL)
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
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: size of the string
 * Return: if failed NULL else pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n > _strlen(s2))
	{
		n = _strlen(s2);
	}

	c = malloc((_strlen(s1) + n + 1) * sizeof(char *));

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (i = 0; i < _strlen(s1); i++)
	{
		c[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}

	c[i] = '\0';
	return (c);
}
