#include "main.h"

/**
 * _strspn - the lenght of a prefix substring
 * @s: initial segment
 * @accept: source
 * Return: number of bytes from s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;

			}
		}
		else
			return (count);

		i++;
	}
	return (count);
}
