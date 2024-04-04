#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the bit to set to 1
 * @index: localisation of the bit to set
 * Return: 1 if success or -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = (~(1 << index) & *n);

	return (1);
}
