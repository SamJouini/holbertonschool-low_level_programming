#include "main.h"

/**
 * print_triangle - print a triangle with #
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int r, c, d;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (r = 1; r <= size; r++)
	{
		for (c = size - r; c > 0; c--)
		{
			_putchar(' ');
		}
		for (d = 1; d <= r; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
