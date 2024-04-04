#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: the bit to set to 1
 * @index: localisation of the bit to set
 * Return: 1 if success or -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (1);
}
