#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n : number
 * Return: 0
 */

void print_line(int n)
{
	/* l =ligne */
	int l;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 1 ; l <= n ; l++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
