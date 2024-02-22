#include "main.h"

/**
 * _isalpha - is it alphabet ?
 * @c : character
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	return (0);
}
