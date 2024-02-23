#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hours1, hours2, minutes1, minutes2;

	for (hours1 = 0; hours1 <= 2; hours1++)
	{
		for (hours2 = 0; hours2 <= 9; hours2++)
		{
			if (hours1 == 2 && hours2 == 4)
			{
				return;
			}

				for (minutes1 = 0; minutes1 <= 5; minutes1++)
				{
					for (minutes2 = 0; minutes2 <= 9; minutes2++)
					{
						_putchar('0' + hours1);
						_putchar('0' + hours2);
						_putchar(':');
						_putchar('0' + minutes1);
						_putchar('0' + minutes2);
						_putchar('\n');
					}
				}
		}
	}
}
