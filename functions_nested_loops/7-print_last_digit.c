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
	_putchar(lastdigit);
	return (lastdigit);
}
