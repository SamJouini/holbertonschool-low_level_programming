#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: numbers of elements in the array
 * @size: of the array
 * Return: ptr to allocated memory or NULL if size <0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
