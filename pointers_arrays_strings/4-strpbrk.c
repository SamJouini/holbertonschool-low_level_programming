#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searching a string for any of a set of byte
 * @s: the string to look trought
 * @accept: the string to compare with
 * Return: location of the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				return (&s[i]);

			}
		}
		i++;
	}
	return (NULL);
}
