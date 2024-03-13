#include "main.h"
#include <stdlib.h>

/**
 * create_array - creats an array of chars
 * @size: size of the array
 * @c: character to initialize
 * Return: null if failed or pointer to array if else
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size);

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
