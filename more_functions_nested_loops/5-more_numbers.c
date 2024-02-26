#include "main.h"

/**
 * more_numbers - print the number from 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int n, ch;

	for (n = 0; n <= 9; n++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
			{
				_putchar((ch / 10) + '0');
			}
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
