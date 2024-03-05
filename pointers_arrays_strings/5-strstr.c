#include "main.h"
#include <stddef.h>

/**
 * _strstr - localisation of  a substring
 * @haystack: string to search through
 * @needle: string to look for
 * Return: 
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

        while (haystack[i] != '\0')
        {
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

                i++;
        }
	return (NULL);
}
