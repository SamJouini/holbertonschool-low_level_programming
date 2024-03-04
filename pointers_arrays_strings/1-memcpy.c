#include "main.h"

/**
 * _memcpy - copy memory area from source to destination
 * @n: number of byte to copy
 * @src: source to copy
 * @dest: destination of copied bytes
 * Return: destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

