#include "main.h"

/**
 * print_square - print a square of #
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	/* l = largeur 
	 * h = hauteur */
	int l, h;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; l < size; l++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
