#include "main.h"
#include <stdio.h>

/**
 * _strcpy - print a pointed string
 * @dest: buffer pointer
 * @src : source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
		return (dest);

}
