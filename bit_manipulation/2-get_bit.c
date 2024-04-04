#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: the bit to 'mesure'
 * @index: localisation of the bit to value
 * Return: the value of the bit at index or -1 if an failed
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
