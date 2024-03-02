#include "main.h"

/**
 * _atoi - convert a string into integer
 *
 * Return :
 */

int _atoi(char *str)
{
	int i;
	int r = 0;
	int positif = 1;
	int start = 0;

	for (i = 0; str[i] !='\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			char c = str[i];
			int d = c - '0';
			r = r * 10 + d;
			start = 1;
		}
		else if (str[i] == '-')
		{
			positif = positif * -1;
		}
		else if (str[i] == '+')
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
