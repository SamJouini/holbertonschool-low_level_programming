#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 * @n: number
 * Return: 0
 */

void print_diagonal(int n)
{
	int h, v;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (v = 0 ; h < n ; h++)
	{
		for (v = 0; v < h; v++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
