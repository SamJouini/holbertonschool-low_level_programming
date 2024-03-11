#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: null on failure or resulting string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = strlen(s1);
	char *str;

	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	for ( ; s1[i] != '\0'; i++)
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
