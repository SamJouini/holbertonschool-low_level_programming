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

		for (b = 0; b <= 9; b++)
		{

			r = a * b;

			if (b == 0)
			{
			}

			else if (r <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((r / 10) + '0');
			}
			_putchar((r % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
