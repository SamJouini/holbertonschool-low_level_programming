#include "main.h"
#include <stdio.h>

/**
 * _strcat - add two array together
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}


	dest[i] = '\0';
	return (dest);
}

