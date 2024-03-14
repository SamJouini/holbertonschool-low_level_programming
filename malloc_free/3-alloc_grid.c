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
	int k;
	int **m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m = malloc(height * sizeof(int *));

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(int));

		if (m[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(m[k]);
			}
			free(m);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
}
