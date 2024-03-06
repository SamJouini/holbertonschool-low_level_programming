#include "main.h"

/**
 * _puts_recursion - pritting a string
 * @s: the string to print
 * Return: O
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
