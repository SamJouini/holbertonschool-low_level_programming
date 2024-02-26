#include "main.h"

/**
 * _isupper - is upper than
 * @c : letter
 * Return: 0
 */

int _isupper(int c)
{
	if (c < 'A' && c < 'Z')
	{
		return (1);
	}
	return (0);
}
