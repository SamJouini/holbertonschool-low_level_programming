#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastdigit;
	char r;

	lastdigit = n % 10;
	r = '0' + lastdigit;

	_putchar(r);
	return (lastdigit);
}
