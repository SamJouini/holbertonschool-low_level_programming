#include "main.h"

/**
 * print_line - print a line in the terminal
 * @n : number
 * Return: 0
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 1 ; a <= n ; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
