#include "main.h"

/**
 * times_table - print the time table
 *
 * return:0
 */

void times_table(void)

{
	int a, b, r;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			r = a * b;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

		}
		_putchar('\n');
	}
}
