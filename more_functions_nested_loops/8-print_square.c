#include "main.h"

/**
 * print_square - print a square of #
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	/* w = width 
	 * h = height */
	int w, h;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (w = 0; w < size; w++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
