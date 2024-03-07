#include "main.h"

/**
 * _sqrt_recursion_test - returns the natural square root of a number
 * @n: number
 * @base: number used as a test
 * Return: natural square root or -1 if not
 */

int _sqrt_recursion_test(int n, int base)
{
	if (base > n)
	{
		return (-1);
	}
	
	if (base * base == n)
	{
		return (base);
	}
	
	else
		return (_sqrt_recursion_test(n, base + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root or -1 if not
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_test(n, 1));
}
