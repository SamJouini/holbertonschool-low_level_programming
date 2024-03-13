#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: of the array
 * @height: of the array
 * Return: NULL if widht/height <0 else  a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
