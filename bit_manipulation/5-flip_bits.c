#include "main.h"
#include <stddef.h>

/**
 * flip_bits - returns the number of bits needed to flip one number to another.
 * @n: number to flip
 * @m: number flipped
 * Return:  the number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	int i = 0;

	while (difference != 0)
	{
		i++;
		difference &= (difference - 1);
	}

	return (i);
}
