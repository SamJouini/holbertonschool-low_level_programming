#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: size of the string
 * Return: if failed NULL else pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i;
	unsigned int j;
	char *c;

	c = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		c[i] = s1[i];
	}

	if (n > strlen(s2))
	{
		n = strlen(s2);
	}

	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}

	c[i] = '\0';
	return (c);
}
