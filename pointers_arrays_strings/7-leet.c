#include "main.h"

/**
 * leet - encoding a string into 1337
 * @s: string
 * Return: encoded string
 */


char *leet(char *s)
{
	char l[5] = { 'a', 'e', 'o', 't', 'l' };
	char n[5] = { 4, 3, 0, 7, 1 };
	int i = 0;
	int c = 0;

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == l[i] || s[c] == l[i] - 32)
				s[c] = n[i] + '0';
		}
		c++;
	}
	return (s);
}
