#include <stdlib.h>

/**
 * array_range - creating an array of integers
 * @min: smallest  integer in the array
 * @max: biggest integer in the array
 * Return: pointer to the new array if not NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = (malloc(sizeof(int) * (max - min + 1)));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
