#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to  allocate memory using malloc
 * @b: unsigned number
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

