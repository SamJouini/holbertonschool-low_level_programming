#include "main.h"
#include <stddef.h>

/**
 * _strchr - location of a character in a string
 * @c: character to locate
 * @s: string
 * Return: location of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
		return (NULL);
}
