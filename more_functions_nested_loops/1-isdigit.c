#include "main.h"

/**
 * _isdigit - if a character is a digit
 * @c : character
 * return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
