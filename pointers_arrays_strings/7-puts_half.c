#include "main.h"

/**
 * _strlen - return the lenght of a string
 * puts_half - print half of a string
 * @str: string of characters
 * Return: second half of string
 */

/* first step to return the lenght of a string */

int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/* second step cut the string in half and print the first half */

void puts_half(char *str)
{
	int h = _strlen(str) / 2;

	if (_strlen(str) % 2 == 1)
	{
		h = (_strlen(str) + 1) / 2;
	}

	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
