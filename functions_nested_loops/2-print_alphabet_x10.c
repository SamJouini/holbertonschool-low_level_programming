#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x 10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int ch, l;

	for (ch = 0; ch <= 9; ch++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}

