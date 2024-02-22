#include "main.h"

/**
 * _islower - is lower than
 * Return: 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	return (0);
}
