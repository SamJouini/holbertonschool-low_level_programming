#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function given as parameters on array's elements
 * @array: array to use
 * @size: size of the array
 * @action: function to run
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
