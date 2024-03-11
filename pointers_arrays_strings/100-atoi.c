#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string into integer
 * @str: a string
 * Return: the integer value parsed from the string
 */

int _atoi(char *str)
{
	int r = 0;
	int positif = 1;
	int start = 0;

	for (; *str != '\0'; str++)
	{
		if (*str >= '0' && *str <= '9')
		{
			char c = *str;
			int d = c - '0';

			r = r * 10 + d;
			start = 1;
		}
		else if (*str == '-')
		{
			positif = positif * -1;
		}
		else if (*str == '+')
		{
			/* nothing to do here just skip */
		}
		else if (start == 1)
		{
			break;
		}
	}
	return (r * positif);
}
