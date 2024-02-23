#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit >= 0)
	{
		_putchar('0' + lastdigit);
		return (lastdigit);
	}

	else
	{
		lastdigit = lastdigit * -1;
		_putchar('0' + lastdigit);
		return (lastdigit);
	}
}
