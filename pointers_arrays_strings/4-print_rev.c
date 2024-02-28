#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int i, j, lenght;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	lenght = i;

	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
