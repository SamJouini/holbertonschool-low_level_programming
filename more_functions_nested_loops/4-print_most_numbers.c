#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			n++;
		_putchar(n);
	}
	_putchar('\n');
}
