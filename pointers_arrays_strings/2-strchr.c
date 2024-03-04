#include "main.h"
#include <stddef.h>

/**
 * _strchr - location of a character in a string
 *
 *
 * Return:
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
