#include "main.h"

/**
 * swap_int - swapt the value of two integers
 * @a : a value
 * @b : another value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
