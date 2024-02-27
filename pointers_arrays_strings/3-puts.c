#include "main.h"

/**
 * _puts - print a string
 * @str: string of characters
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
