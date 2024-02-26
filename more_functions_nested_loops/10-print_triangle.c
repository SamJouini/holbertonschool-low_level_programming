#include "main.h"

/**
 * print_triangle - print a triangle with #
 * @size : the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	/* r = row
	 * w = whitespace
	 * c = character*/
	int r, w, c;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (r = 1; r <= size; r++)
	{
		for (w = size - r; w > 0; w--)
		{
			_putchar(' ');
		}
		for (c = 1; c <= r; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
