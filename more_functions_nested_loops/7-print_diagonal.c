#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 * @n: number
 * Return: 0
 */

void print_diagonal(int n)
{
	/* 
	 * h = horizontal
	 * v = vertical 
	 */

	int h, v;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (v = 0 ; v < n ; v++)
	{
		for (h = 0; h < v; h++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
