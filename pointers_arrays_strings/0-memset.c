#include "main.h"

/**
 * _memset - imitate memset fonction
 * @s: pointed array
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
